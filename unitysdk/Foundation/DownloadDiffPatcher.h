#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DownloadDiffPatcher_Step.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

class Class_1_AB5D161F6D5522E7;
namespace Foundation { class ConfigDiffPatcher; }
namespace Foundation { class DownloadDiffPatcher_DiffFileCollectResult; }
namespace Foundation { class DownloadDiffPatcher_DiffResult; }
namespace Foundation { class ExceptionInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define FOUNDATION_DOWNLOADDIFFPATCHER_ABORT_OFFSET UNITYSDK_OFFSET(0x8CE9030)
#define FOUNDATION_DOWNLOADDIFFPATCHER_CHECKSPACEENOUGH_OFFSET UNITYSDK_OFFSET(0x8CE89B0)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFPATCHWORK_OFFSET UNITYSDK_OFFSET(0x8CE97B0)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DOCOLLECT_OFFSET UNITYSDK_OFFSET(0x8CE9090)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DOMOVE_OFFSET UNITYSDK_OFFSET(0x8CE9580)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DOPATCH_OFFSET UNITYSDK_OFFSET(0x8CE9330)
#define FOUNDATION_DOWNLOADDIFFPATCHER_ENTERNEXTSTEP_OFFSET UNITYSDK_OFFSET(0x8CE8D60)
#define FOUNDATION_DOWNLOADDIFFPATCHER_FINISH_OFFSET UNITYSDK_OFFSET(0x8CE8670)
#define FOUNDATION_DOWNLOADDIFFPATCHER_GETFILECOLLECTRESULT_OFFSET UNITYSDK_OFFSET(0x8CEA020)
#define FOUNDATION_DOWNLOADDIFFPATCHER_GET_CONFIGDIFFPATCHER_OFFSET UNITYSDK_OFFSET(0x8CE8100)
#define FOUNDATION_DOWNLOADDIFFPATCHER_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x8CE8060)
#define FOUNDATION_DOWNLOADDIFFPATCHER_REGISTERSTATE_OFFSET UNITYSDK_OFFSET(0x8CE8080)
#define FOUNDATION_DOWNLOADDIFFPATCHER_SETFAIL_OFFSET UNITYSDK_OFFSET(0x8CE8CA0)
#define FOUNDATION_DOWNLOADDIFFPATCHER_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x8CE8070)
#define FOUNDATION_DOWNLOADDIFFPATCHER_START_OFFSET UNITYSDK_OFFSET(0x8CE8170)
#define FOUNDATION_DOWNLOADDIFFPATCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8CE8EA0)
#define FOUNDATION_DOWNLOADDIFFPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CEA5B0)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_TypeDefinitionIndex = 61314;

	class DownloadDiffPatcher : public ::System::Object
	{
	public:
		// static const ::System::String* DIFF_FILE_EXTENSION; // 0x0
		// static const ::System::String* DIFFNEW_FILE_EXTENSION; // 0x0
		// static const ::System::String* OUTPUT_FILE_EXTENSION; // 0x0
		::System::Action_1<::System::Single>* onUpdate; // 0x10
		::Class_1_AB5D161F6D5522E7* timeSlice; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_DAA84C1CDD754F37>* verifyFileDict; // 0x20
		::System::Collections::Generic::Queue_1<::System::Action*>* sliceTasks; // 0x28
		::System::Collections::Generic::List_1<::Foundation::DownloadDiffPatcher_DiffResult*>* processDiffs; // 0x30
		::System::Action_2<::System::Int32, ::System::String*>* _onFailed_k__BackingField; // 0x38
		::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*>* onFinished; // 0x40
		::System::Int32 processIndex; // 0x48
		::Foundation::DownloadDiffPatcher_Step curStep; // 0x4C
		::System::Boolean isDone; // 0x4D
		::System::Int32 processDoneCount; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER__CTOR_OFFSET))(this);
		}

		::System::Action_2<::System::Int32, ::System::String*>* get_onFailed()
		{
			return ((::System::Action_2<::System::Int32, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_GET_ONFAILED_OFFSET))(this);
		}

		::System::Void set_onFailed(::System::Action_2<::System::Int32, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_SET_ONFAILED_OFFSET))(this, value);
		}

		::System::Void RegisterState(::System::Action_1<::System::Single>* onUpdate, ::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*>* onFinished, ::System::Action_2<::System::Int32, ::System::String*>* onFailed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_REGISTERSTATE_OFFSET))(this, onUpdate, onFinished, onFailed);
		}

		::Foundation::ConfigDiffPatcher* get_ConfigDiffPatcher()
		{
			return ((::Foundation::ConfigDiffPatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_GET_CONFIGDIFFPATCHER_OFFSET))(this);
		}

		::System::Void Start(::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* diffPatchFiles)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_START_OFFSET))(this, diffPatchFiles);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_UPDATE_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_FINISH_OFFSET))(this);
		}

		::System::Void SetFail(::System::Int32 code, ::System::String* errorMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_SETFAIL_OFFSET))(this, code, errorMsg);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_ABORT_OFFSET))(this);
		}

		::System::Boolean CheckSpaceEnough(::System::String*& msg)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_CHECKSPACEENOUGH_OFFSET))(this, msg);
		}

		::System::Void EnterNextStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_ENTERNEXTSTEP_OFFSET))(this);
		}

		::System::Void DoCollect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DOCOLLECT_OFFSET))(this);
		}

		::System::Void DoMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DOMOVE_OFFSET))(this);
		}

		::System::Void DoPatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DOPATCH_OFFSET))(this);
		}

		::System::Void DiffPatchWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFPATCHWORK_OFFSET))(this);
		}

		::Foundation::DownloadDiffPatcher_DiffFileCollectResult* GetFileCollectResult(::Struct_2_DAA84C1CDD754F37 filePickInfo)
		{
			return ((::Foundation::DownloadDiffPatcher_DiffFileCollectResult*(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_GETFILECOLLECTRESULT_OFFSET))(this, filePickInfo);
		}
	};
}
