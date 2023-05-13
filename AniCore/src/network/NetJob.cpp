#include "NetJob.hpp"

namespace anicore
{
    NetJob::NetJob(JobType type, std::string url, JobCallback)
        : url(url), back(func)
    {
        HandleType(type);
    }

    void NetJob::HandleType(JobType type)
    {
        switch(type)
        {
            case HasJobType(JobType::Get | JobType::Sync):
            this->current_type = JobType::Get; break;
            case HasJobType(JobType::Get | JobType::Async):
            this->current_type = JobType::Get; use_async = true; break;
            case HasJobType(JobType::Post | JobType::Sync):
            this->current_type = JobType::Post; break;
            case HasJobType(JobType::Post | JobType::Async):
            this->current_type = JobType::Post; use_async = true; break;
            default:
            throw new NetWorkException(0, "[None]", "Job Type Format Error");
            break;
        }
    }
    
    void NetJob::Action(NetHandler handler)
    {

    }
    
    void NetJob::OnFininshed()
    {

    }
}