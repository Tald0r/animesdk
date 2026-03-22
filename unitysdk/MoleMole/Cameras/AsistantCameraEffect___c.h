#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }

#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x80236A0)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x80236E0)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__TEST_B__6_0_OFFSET UNITYSDK_OFFSET(0x80236F0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int AsistantCameraEffect___c_TypeDefinitionIndex = 41321;

	class AsistantCameraEffect___c : public ::System::Object
	{
	public:
		static ::DG::Tweening::Core::DOGetter_1<::System::Int32>** StaticGet___9__6_0()
		{
			return (::DG::Tweening::Core::DOGetter_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AsistantCameraEffect___c_TypeDefinitionIndex)->GetStaticField(0x381D0);
		}
		static ::MoleMole::Cameras::AsistantCameraEffect___c** StaticGet___9()
		{
			return (::MoleMole::Cameras::AsistantCameraEffect___c**)Il2CppClass::FromTypeDefinitionIndex(AsistantCameraEffect___c_TypeDefinitionIndex)->GetStaticField(0x381D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Test_b__6_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__TEST_B__6_0_OFFSET))(this);
		}
	};
}
