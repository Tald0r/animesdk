#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Camera_FieldOfViewAxis.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_GETZOOMRANGE_OFFSET UNITYSDK_OFFSET(0x13F94CD0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_INITCAMERAPIPELINE_OFFSET UNITYSDK_OFFSET(0x13F94920)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_ONCHANGEUSECAMERAPIPELINE_OFFSET UNITYSDK_OFFSET(0x13F948C0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x13F94D80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraInit_TypeDefinitionIndex = 40879;

	class ConfigHollowCameraInit : public ::System::Object
	{
	public:
		::System::String* safeAreaKey; // 0x10
		::System::String* centerKey; // 0x18
		::UnityEngine::Vector3 eulerAngle; // 0x20
		::UnityEngine::Vector2 initZRange; // 0x2C
		::System::Single zZoomChangeSpeedMouseScroll; // 0x34
		::UnityEngine::Camera_FieldOfViewAxis foxAxis; // 0x38
		::System::Single zZoomChangeSpeed; // 0x3C
		::System::Single zZoomChangeSpeedBtn; // 0x40
		::System::Single initZ; // 0x44
		::System::Single zZoomDumpTime; // 0x48
		::System::Single fieldOfView; // 0x4C
		::System::Boolean UseCameraPipeline; // 0x50
		::System::Boolean EnableGuiCamAnim; // 0x51
		::System::Boolean IsEnableLog; // 0x52
		::System::Boolean OpenPipelineFullLog; // 0x53

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT__CTOR_OFFSET))(this);
		}

		::System::Void OnChangeUseCameraPipeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_ONCHANGEUSECAMERAPIPELINE_OFFSET))(this);
		}

		::System::Void InitCameraPipeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_INITCAMERAPIPELINE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetZoomRange(::System::Single baseZ, ::System::Single curBaseZ)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT_GETZOOMRANGE_OFFSET))(this, baseZ, curBaseZ);
		}
	};
}
