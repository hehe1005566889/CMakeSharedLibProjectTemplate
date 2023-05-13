#pragma once 

#include "globals.h"

#include <fstream>

namespace anicore
{

class NetHandler;

#define JobCallback void(*func)(int code, NetJob& job)

    enum JobType
    { 
        Get = 1, Post = 2,
        Async = 3, Sync = 4 
        
    };

    struct NetJob
    {
    public:
        NetJob(JobType type, std::string url, JobCallback);
        ~NetJob();

        void Release();

    private:
        bool HasJobType(JobType combination, JobType target)
        { return (combination & target) == target; }

        void HandleType(JobType type);

    public: 
        void Action(NetHandler handler);
        void OnFininshed();

        void ToString(std::string& str);
        void ToFile(const char* path);
        void ToStream(std::ofstream& stream);

    public:
        std::string url;
        std::ofstream stream;
        
        void(*back)(int code, NetJob& job);
        JobType current_type;
        bool use_async;
    };
}