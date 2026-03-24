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

#define FOUNDATION_DOWNLOADDIFFPATCHER_ABORT_OFFSET UNITYSDK_OFFSET(0x8FCB840)
#define FOUNDATION_DOWNLOADDIFFPATCHER_CHECKSPACEENOUGH_OFFSET UNITYSDK_OFFSET(0x8FCB1C0)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFPATCHWORK_OFFSET UNITYSDK_OFFSET(0x8FCBFB0)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DOCOLLECT_OFFSET UNITYSDK_OFFSET(0x8FCB8A0)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DOMOVE_OFFSET UNITYSDK_OFFSET(0x8FCBD90)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DOPATCH_OFFSET UNITYSDK_OFFSET(0x8FCBB40)
#define FOUNDATION_DOWNLOADDIFFPATCHER_ENTERNEXTSTEP_OFFSET UNITYSDK_OFFSET(0x8FCB570)
#define FOUNDATION_DOWNLOADDIFFPATCHER_FINISH_OFFSET UNITYSDK_OFFSET(0x8FCAE70)
#define FOUNDATION_DOWNLOADDIFFPATCHER_GETFILECOLLECTRESULT_OFFSET UNITYSDK_OFFSET(0x8FCC810)
#define FOUNDATION_DOWNLOADDIFFPATCHER_GET_CONFIGDIFFPATCHER_OFFSET UNITYSDK_OFFSET(0x8FCA900)
#define FOUNDATION_DOWNLOADDIFFPATCHER_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x8FCA860)
#define FOUNDATION_DOWNLOADDIFFPATCHER_REGISTERSTATE_OFFSET UNITYSDK_OFFSET(0x8FCA880)
#define FOUNDATION_DOWNLOADDIFFPATCHER_SETFAIL_OFFSET UNITYSDK_OFFSET(0x8FCB4B0)
#define FOUNDATION_DOWNLOADDIFFPATCHER_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x8FCA870)
#define FOUNDATION_DOWNLOADDIFFPATCHER_START_OFFSET UNITYSDK_OFFSET(0x8FCA970)
#define FOUNDATION_DOWNLOADDIFFPATCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8FCB6B0)
#define FOUNDATION_DOWNLOADDIFFPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x8FCCD90)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_TypeDefinitionIndex = 43875;

	class DownloadDiffPatcher : public ::System::Object
	{
	public:
		// static const ::System::String* DIFF_FILE_EXTENSION; // 0x0
		// static const ::System::String* DIFFNEW_FILE_EXTENSION; // 0x0
		// static const ::System::String* OUTPUT_FILE_EXTENSION; // 0x0
		::System::Collections::Generic::List_1<::Foundation::DownloadDiffPatcher_DiffResult*>* processDiffs; // 0x10
		::System::Action_1<::System::Single>* onUpdate; // 0x18
		::Class_1_AB5D161F6D5522E7* timeSlice; // 0x20
		::System::Action_2<::System::Int32, ::System::String*>* _onFailed_k__BackingField; // 0x28
		::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*>* onFinished; // 0x30
		::System::Collections::Generic::Queue_1<::System::Action*>* sliceTasks; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_DAA84C1CDD754F37>* verifyFileDict; // 0x40
		::Foundation::DownloadDiffPatcher_Step curStep; // 0x48
		::System::Boolean isDone; // 0x49
		::System::Int32 processDoneCount; // 0x4C
		::System::Int32 processIndex; // 0x50

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
