#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UICurveSlider; }

#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_UICURVESLIDER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19C2A840)
#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_UICURVESLIDER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19C2A850)
#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_UICURVESLIDER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x19C2AB20)
#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_UICURVESLIDER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C2AD40)
#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_UICURVESLIDER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2AD00)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UICurveSlider_UICurveSlider_UnityGeneratedFormatter_TypeDefinitionIndex = 75268;

	class UICurveSlider_UICurveSlider_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::UnityEngine::UI::Extension::UICurveSlider*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(UICurveSlider_UICurveSlider_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x353A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>**)Il2CppClass::FromTypeDefinitionIndex(UICurveSlider_UICurveSlider_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x353A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_UICURVESLIDER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_UICURVESLIDER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_UICURVESLIDER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::UI::Extension::UICurveSlider*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UICurveSlider*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_UICURVESLIDER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::UnityEngine::UI::Extension::UICurveSlider*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UICurveSlider*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_UICURVESLIDER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
