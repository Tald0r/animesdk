#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus.h"

namespace LyraSector { class LyraPackedAsset; }
namespace LyraSector { class LyraSparseTreeBakedData; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraBakedDataManager_AsyncDecompressLyraSectorJobsData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_ADDTOJOBSDATAIFFINISHEDLASTJOB_OFFSET UNITYSDK_OFFSET(0x13921AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISEDBINARYDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x13921A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISHEDALLJOB_OFFSET UNITYSDK_OFFSET(0x13921A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISHEDLASTJOB_OFFSET UNITYSDK_OFFSET(0x139219D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_RELEASEJOBDATA_OFFSET UNITYSDK_OFFSET(0x13921D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13921D80)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_AsyncDecompressLyraSectorSingleJobData_TypeDefinitionIndex = 28981;

	class LyraBakedDataManager_AsyncDecompressLyraSectorSingleJobData : public ::System::Object
	{
	public:
		::LyraSector::LyraPackedAsset* packedAsset; // 0x10
		::LyraSector::LyraSparseTreeBakedData* decompressedSector; // 0x18
		::System::Boolean isForDistanceField; // 0x20
		::System::Int32 currentBlockIndex; // 0x24
		::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus jobStatus; // 0x28
		::LyraSector::LyraSectorCoord coord; // 0x2C
		::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus nextJobStatus; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FinishedLastJob()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISHEDLASTJOB_OFFSET))(this);
		}

		::System::Boolean FinisedBinaryDecompression()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISEDBINARYDECOMPRESSION_OFFSET))(this);
		}

		::System::Boolean FinishedAllJob()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISHEDALLJOB_OFFSET))(this);
		}

		::System::Int32 AddToJobsDataIfFinishedLastJob(::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData* jobsData)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_ADDTOJOBSDATAIFFINISHEDLASTJOB_OFFSET))(this, jobsData);
		}

		::System::Void ReleaseJobData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_RELEASEJOBDATA_OFFSET))(this);
		}
	};
}
