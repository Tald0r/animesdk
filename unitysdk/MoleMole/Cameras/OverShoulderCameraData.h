#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/Cameras/OverShoulderCameraAxisState.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/Struct_2_52A902145F5BE513_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }

#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x399750)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDIN_OFFSET UNITYSDK_OFFSET(0x399770)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDOUT_OFFSET UNITYSDK_OFFSET(0x399780)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x399760)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_01DD87652E0552FE_OFFSET UNITYSDK_OFFSET(0xB49EE30)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_0BA94794ED6DD07E_OFFSET UNITYSDK_OFFSET(0x75A4C0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_10FFF5D129383396_OFFSET UNITYSDK_OFFSET(0x399A80)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1302A164EE4E310C_OFFSET UNITYSDK_OFFSET(0x399840)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1CCA9681CE0AE7A7_OFFSET UNITYSDK_OFFSET(0x75A2C0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2923CE4B2F0850CF_OFFSET UNITYSDK_OFFSET(0x399880)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x75A430)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_43F7F5C3E587A224_OFFSET UNITYSDK_OFFSET(0x399BA0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_4B75E1858CDBA430_OFFSET UNITYSDK_OFFSET(0x399850)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x399B60)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5CC415752F05F246_OFFSET UNITYSDK_OFFSET(0x75A1E0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5DBD0C9CB5B2C268_OFFSET UNITYSDK_OFFSET(0x75A2E0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5F9B14860EA6F2FD_OFFSET UNITYSDK_OFFSET(0x75A1D0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_655EB97F58032004_OFFSET UNITYSDK_OFFSET(0x75A2D0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_6A7F69A381F965E9_OFFSET UNITYSDK_OFFSET(0x75A210)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_851D7650AB039B8E_OFFSET UNITYSDK_OFFSET(0x399CF0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_90F155C90510AC42_OFFSET UNITYSDK_OFFSET(0xB4A0230)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_939383CFABF4988F_OFFSET UNITYSDK_OFFSET(0x399C40)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x399BB0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_CED7A2E9A352C6FD_OFFSET UNITYSDK_OFFSET(0x399AA0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_EE328995A74C4B7C_OFFSET UNITYSDK_OFFSET(0x399D20)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FA7F07669215B524_OFFSET UNITYSDK_OFFSET(0x399950)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FBA744CE7479F95C_OFFSET UNITYSDK_OFFSET(0x3997C0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x399B90)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FDFA9E89965D071D_OFFSET UNITYSDK_OFFSET(0x75A300)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x399790)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverShoulderCameraData_TypeDefinitionIndex = 74474;

	struct alignas(8) OverShoulderCameraData
	{
		::PipelineCamera::EulerRotation _cameraRotation; // 0x10
		::Foundation::Variable_1<::UnityEngine::Vector3> _characterPosition; // 0x58
		::System::Single _startFov; // 0x78
		::System::Single _currentFov; // 0x7C
		::UnityEngine::Vector3 _dampingTargetPosition; // 0x80
		::MoleMole::Cameras::OverShoulderCameraConfig* _config; // 0x90
		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* _overrideConfig; // 0x98
		::MoleMole::Cameras::CameraTrackBlending* _overrideBlendIn; // 0xA0
		::MoleMole::Cameras::CameraTrackBlending* _overrideBlendOut; // 0xA8
		::System::Boolean _enableYawAngleLimit; // 0xB0
		::Foundation::Variable_1<::System::Single> _centerYawAngle; // 0xB8
		::System::Single _yawAngleLimitThreshold; // 0xD0
		::MoleMole::Cameras::OverShoulderCameraAxisState _xAxisState; // 0xD4
		::MoleMole::Cameras::OverShoulderCameraAxisState _yAxisState; // 0xE0
		::Struct_2_52A902145F5BE513_1 _context; // 0xF0
		::UnityEngine::Vector3 _xzDampingVelocity; // 0x1C8
		::System::Single _yDampingVelocity; // 0x1D4

		/*
		::System::Void _ctor(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::Struct_2_52A902145F5BE513_1& a4, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*& a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::UnityEngine::Quaternion, ::System::Single, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
		*/

		::MoleMole::Cameras::OverShoulderCameraConfig* get_Config()
		{
			return ((::MoleMole::Cameras::OverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_CONFIG_OFFSET))(this);
		}

		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* get_OverrideConfig()
		{
			return ((::MoleMole::Cameras::OverrideOverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDECONFIG_OFFSET))(this);
		}

		::MoleMole::Cameras::CameraTrackBlending* get_OverrideBlendIn()
		{
			return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDIN_OFFSET))(this);
		}

		::MoleMole::Cameras::CameraTrackBlending* get_OverrideBlendOut()
		{
			return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDOUT_OFFSET))(this);
		}

		::System::Void Method_2_FBA744CE7479F95C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FBA744CE7479F95C_OFFSET))(this, a1);
		}

		::System::Void Method_2_1302A164EE4E310C(::System::Single a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1302A164EE4E310C_OFFSET))(this, a1, a2, a3);
		}

		/*
		static ::PipelineCamera::WorldBasicCameraData Method_2_01DD87652E0552FE(::MoleMole::Cameras::OverShoulderCameraData& a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::Cameras::OverShoulderCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_01DD87652E0552FE_OFFSET))(a1);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_4B75E1858CDBA430(::UnityEngine::Vector3 a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_4B75E1858CDBA430_OFFSET))(this, a1);
		}
		*/

		/*
		::PipelineCamera::WorldBasicCameraData Method_2_2923CE4B2F0850CF(::System::Single a1, ::System::Single a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_2923CE4B2F0850CF_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::UnityEngine::Quaternion Method_2_FA7F07669215B524()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FA7F07669215B524_OFFSET))(this);
		}
		*/

		/*
		::System::Void Method_2_10FFF5D129383396(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_10FFF5D129383396_OFFSET))(this, a1);
		}
		*/

		::UnityEngine::Vector3 Method_2_CED7A2E9A352C6FD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_CED7A2E9A352C6FD_OFFSET))(this);
		}

		::System::Void Method_2_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_4E8DF6F8A37B229A_OFFSET))(this, a1);
		}

		::System::Void Method_2_FBF2CB29FD3B55E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
		}

		::System::Boolean Method_2_43F7F5C3E587A224(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_43F7F5C3E587A224_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_BB2928BEC244DEB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_939383CFABF4988F()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_939383CFABF4988F_OFFSET))(this);
		}

		/*
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> Method_2_851D7650AB039B8E(::PipelineCamera::WorldBasicCameraData& a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_851D7650AB039B8E_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void Method_2_EE328995A74C4B7C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_EE328995A74C4B7C_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_2_90F155C90510AC42(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_90F155C90510AC42_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_2_5F9B14860EA6F2FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5F9B14860EA6F2FD_OFFSET))(this);
		}

		::System::Boolean Method_2_5CC415752F05F246(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5CC415752F05F246_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_6A7F69A381F965E9(::System::Single& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_6A7F69A381F965E9_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector2 Method_2_1CCA9681CE0AE7A7(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_1CCA9681CE0AE7A7_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void Method_2_655EB97F58032004(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_655EB97F58032004_OFFSET))(this, a1);
		}

		/*
		::PipelineCamera::WorldBasicCameraData Method_2_5DBD0C9CB5B2C268(::System::Single a1, ::System::Single a2)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_5DBD0C9CB5B2C268_OFFSET))(this, a1, a2);
		}
		*/

		::PipelineCamera::EulerRotation Method_2_FDFA9E89965D071D(::System::Single a1, ::System::Single a2)
		{
			return ((::PipelineCamera::EulerRotation(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_FDFA9E89965D071D_OFFSET))(this, a1, a2);
		}

		::System::Single Method_2_3422201382CE593B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_3422201382CE593B_OFFSET))(this);
		}

		/*
		::System::Void Method_2_0BA94794ED6DD07E(::PipelineCamera::WorldBasicCameraData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_METHOD_2_0BA94794ED6DD07E_OFFSET))(this, a1);
		}
		*/
	};
}
