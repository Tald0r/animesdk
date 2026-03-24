#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/SpecialGamepadInputHintType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"

namespace MoleMole { class BaseInputActionEventConfig; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace MoleMole::Config { class ConfigInputSetting; }
namespace MoleMole::Config { class InputActionTextIconConfig; }
namespace MoleMole::Config { class InputCodeSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CONFIGINPUTSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10A963D0)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CONFIGINPUTSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10A963E0)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CONFIGINPUTSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10A975E0)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CONFIGINPUTSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A98030)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CONFIGINPUTSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10A97FF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter_TypeDefinitionIndex = 78836;

	class ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigInputSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46A60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputActionEventType, ::MoleMole::BaseInputActionEventConfig*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputActionEventType, ::MoleMole::BaseInputActionEventConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46A68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::String*>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46A70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46A78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46A80);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::InputActionTextIconConfig*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::InputActionTextIconConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46A88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::MouseButton, ::System::String*>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::MouseButton, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46A90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SpecialGamepadInputHintType, ::System::String*>*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SpecialGamepadInputHintType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46A98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46AA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_ConfigInputSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46AA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CONFIGINPUTSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CONFIGINPUTSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CONFIGINPUTSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigInputSetting*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigInputSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CONFIGINPUTSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigInputSetting*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigInputSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CONFIGINPUTSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
