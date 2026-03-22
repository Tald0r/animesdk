#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E6FD10)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__COMBOSIGN_B__20_0_OFFSET UNITYSDK_OFFSET(0x16E6FE20)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16E6FD50)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__GET_INSTANCE_B__10_0_OFFSET UNITYSDK_OFFSET(0x16E6FD60)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__POSTREQUEST_B__17_1_OFFSET UNITYSDK_OFFSET(0x16E6FD70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKUploader___c_TypeDefinitionIndex = 33779;

	class MiHoYoSDKUploader___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__17_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x24210);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x24218);
		}
		static ::MiHoYo::SDK::MiHoYoSDKUploader___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoSDKUploader___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x24220);
		}
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x24228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__CTOR_OFFSET))(this);
		}

		::System::Void _get_Instance_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__GET_INSTANCE_B__10_0_OFFSET))(this);
		}

		::System::Void _PostRequest_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__POSTREQUEST_B__17_1_OFFSET))(this);
		}

		::System::String* _ComboSign_b__20_0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__COMBOSIGN_B__20_0_OFFSET))(this, x);
		}
	};
}
