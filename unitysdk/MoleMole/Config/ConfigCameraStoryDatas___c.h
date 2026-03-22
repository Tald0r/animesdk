#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CameraStoryDataEntry; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6243850)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6243890)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__ONBEFORESERIALIZE_B__12_0_OFFSET UNITYSDK_OFFSET(0x62438A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStoryDatas___c_TypeDefinitionIndex = 56397;

	class ConfigCameraStoryDatas___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigCameraStoryDatas___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigCameraStoryDatas___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas___c_TypeDefinitionIndex)->GetStaticField(0x2F6C0);
		}
		static ::System::Comparison_1<::MoleMole::Config::CameraStoryDataEntry*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::MoleMole::Config::CameraStoryDataEntry*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraStoryDatas___c_TypeDefinitionIndex)->GetStaticField(0x2F6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnBeforeSerialize_b__12_0(::MoleMole::Config::CameraStoryDataEntry* a, ::MoleMole::Config::CameraStoryDataEntry* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::CameraStoryDataEntry*, ::MoleMole::Config::CameraStoryDataEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS___C__ONBEFORESERIALIZE_B__12_0_OFFSET))(this, a, b);
		}
	};
}
