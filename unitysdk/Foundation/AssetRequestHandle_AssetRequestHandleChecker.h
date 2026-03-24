#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class StackFrame; }

#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_CREATECHECKERHANDLE_OFFSET UNITYSDK_OFFSET(0x1AD56C10)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_CURRENTSTACKCUSTOMIZEDLOG_OFFSET UNITYSDK_OFFSET(0x1AD56F80)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_DISPOSEALL_OFFSET UNITYSDK_OFFSET(0x1AD571B0)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_DISPOSECHECKHANDLE_OFFSET UNITYSDK_OFFSET(0x1AD567D0)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AD566E0)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USECHECKERPOOL_OFFSET UNITYSDK_OFFSET(0x1AD56400)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USEHANDLECHECKER_OFFSET UNITYSDK_OFFSET(0x1AD56340)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USELOADSTACK_OFFSET UNITYSDK_OFFSET(0x1AD564C0)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_ISMETHODTOBEINCLUDED_OFFSET UNITYSDK_OFFSET(0x1AD57470)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_MARKNOTDISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD56B40)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_MARKNOTUSE_OFFSET UNITYSDK_OFFSET(0x1AD569C0)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_METHODCALLLOG_OFFSET UNITYSDK_OFFSET(0x1AD57640)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USECHECKERPOOL_OFFSET UNITYSDK_OFFSET(0x1AD56460)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USEHANDLECHECKER_OFFSET UNITYSDK_OFFSET(0x1AD563A0)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USELOADSTACK_OFFSET UNITYSDK_OFFSET(0x1AD56520)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD56580)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD56620)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestHandle_AssetRequestHandleChecker_TypeDefinitionIndex = 7864;

	class AssetRequestHandle_AssetRequestHandleChecker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference_1<::Foundation::AssetRequestHandle_AssetRequestHandleChecker*>*>** StaticGet_WeakRefCheckers()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference_1<::Foundation::AssetRequestHandle_AssetRequestHandleChecker*>*>**)Il2CppClass::FromTypeDefinitionIndex(AssetRequestHandle_AssetRequestHandleChecker_TypeDefinitionIndex)->GetStaticField(0x6850);
		}
		static ::System::Boolean* StaticGet__UseLoadStack_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetRequestHandle_AssetRequestHandleChecker_TypeDefinitionIndex)->GetStaticField(0x3550);
		}
		static ::System::Boolean* StaticGet__UseHandleChecker_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetRequestHandle_AssetRequestHandleChecker_TypeDefinitionIndex)->GetStaticField(0x3551);
		}
		static ::System::Boolean* StaticGet__UseCheckerPool_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetRequestHandle_AssetRequestHandleChecker_TypeDefinitionIndex)->GetStaticField(0x3552);
		}
		::Foundation::AssetRequestHandle handle; // 0x10
		::System::String* LoadStack; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_UseHandleChecker()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USEHANDLECHECKER_OFFSET))();
		}

		static ::System::Void set_UseHandleChecker(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USEHANDLECHECKER_OFFSET))(value);
		}

		static ::System::Boolean get_UseCheckerPool()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USECHECKERPOOL_OFFSET))();
		}

		static ::System::Void set_UseCheckerPool(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USECHECKERPOOL_OFFSET))(value);
		}

		static ::System::Boolean get_UseLoadStack()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USELOADSTACK_OFFSET))();
		}

		static ::System::Void set_UseLoadStack(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USELOADSTACK_OFFSET))(value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_FINALIZE_OFFSET))(this);
		}

		::System::Void DisposeCheckHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_DISPOSECHECKHANDLE_OFFSET))(this);
		}

		::System::Void MarkNotDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_MARKNOTDISPOSE_OFFSET))(this);
		}

		::System::Void MarkNotUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_MARKNOTUSE_OFFSET))(this);
		}

		static ::Foundation::AssetRequestHandle CreateCheckerHandle(::Foundation::AssetRequestHandle& originHandle)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_CREATECHECKERHANDLE_OFFSET))(originHandle);
		}

		static ::System::Void DisposeAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_DISPOSEALL_OFFSET))();
		}

		static ::System::String* CurrentStackCustomizedLog()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_CURRENTSTACKCUSTOMIZEDLOG_OFFSET))();
		}

		static ::System::Boolean IsMethodToBeIncluded(::System::Diagnostics::StackFrame* p_StackMethod)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_ISMETHODTOBEINCLUDED_OFFSET))(p_StackMethod);
		}

		static ::System::String* MethodCallLog(::System::Diagnostics::StackFrame* p_MethodCall)
		{
			return ((::System::String*(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_METHODCALLLOG_OFFSET))(p_MethodCall);
		}
	};
}
