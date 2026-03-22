#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarLightChangeSettings.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class UIAvatarLightSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace UnityEngine { class Cubemap; }

#define MOLEMOLE_UIAVATARLIGHTSETTING_UIAVATARLIGHTSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB29AD10)
#define MOLEMOLE_UIAVATARLIGHTSETTING_UIAVATARLIGHTSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xB29AD20)
#define MOLEMOLE_UIAVATARLIGHTSETTING_UIAVATARLIGHTSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xB29BAC0)
#define MOLEMOLE_UIAVATARLIGHTSETTING_UIAVATARLIGHTSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB29C2F0)
#define MOLEMOLE_UIAVATARLIGHTSETTING_UIAVATARLIGHTSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB29C2B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarLightSetting_UIAvatarLightSetting_UnityGeneratedFormatter_TypeDefinitionIndex = 48592;

	class UIAvatarLightSetting_UIAvatarLightSetting_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::UIAvatarLightSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_UIAvatarLightSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32470);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Cubemap*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Cubemap*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_UIAvatarLightSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32478);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_UIAvatarLightSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32480);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_UIAvatarLightSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32488);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_UIAvatarLightSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32490);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_UIAvatarLightSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32498);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_UIAvatarLightSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x324A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightChangeSettings>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightChangeSettings>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarLightSetting_UIAvatarLightSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x324A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_UIAVATARLIGHTSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_UIAVATARLIGHTSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_UIAVATARLIGHTSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAvatarLightSetting*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_UIAVATARLIGHTSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::UIAvatarLightSetting*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARLIGHTSETTING_UIAVATARLIGHTSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
