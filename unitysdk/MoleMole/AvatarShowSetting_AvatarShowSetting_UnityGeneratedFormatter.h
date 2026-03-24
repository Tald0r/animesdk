#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class SecondaryCharacterShowSetting; }
namespace MoleMole { class SkinOverrideShowSettingConfigs; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarCameraAnimationSetting; }
namespace MoleMole { class UIAvatarCameraSetting; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIAvatarSetting; }
namespace MoleMole { class UIModelBgSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_AVATARSHOWSETTING_AVATARSHOWSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB8F8FC0)
#define MOLEMOLE_AVATARSHOWSETTING_AVATARSHOWSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xB8F8FD0)
#define MOLEMOLE_AVATARSHOWSETTING_AVATARSHOWSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xB8F9690)
#define MOLEMOLE_AVATARSHOWSETTING_AVATARSHOWSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8F9AC0)
#define MOLEMOLE_AVATARSHOWSETTING_AVATARSHOWSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F9A80)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarShowSetting_AvatarShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex = 68888;

	class AvatarShowSetting_AvatarShowSetting_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::AvatarShowSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::SecondaryCharacterShowSetting*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::SecondaryCharacterShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_AvatarShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41430);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIModelBgSetting*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIModelBgSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_AvatarShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41438);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorRandomIntConfig*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AnimatorRandomIntConfig*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_AvatarShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41440);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimatorParamsSetting*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarAnimatorParamsSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_AvatarShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41448);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarSetting*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_AvatarShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41450);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightSetting*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarLightSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_AvatarShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41458);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraAnimationSetting*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraAnimationSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_AvatarShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41460);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::SkinOverrideShowSettingConfigs*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::SkinOverrideShowSettingConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_AvatarShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41468);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraSetting*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIAvatarCameraSetting*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarShowSetting_AvatarShowSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_AVATARSHOWSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_AVATARSHOWSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_AVATARSHOWSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AvatarShowSetting*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarShowSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_AVATARSHOWSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::AvatarShowSetting*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AvatarShowSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_AVATARSHOWSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
