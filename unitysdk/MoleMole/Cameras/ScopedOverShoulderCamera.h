#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/Cameras/OverShoulderCameraData.h"
#include "unitysdk/MoleMole/Cameras/ScopedOverShoulderCamera_Enum_3_55C6DDFDFD9F932E.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_52A902145F5BE513_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6219060)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_0781F88D06095A03_OFFSET UNITYSDK_OFFSET(0x621A7C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_0E1BDEE095A16B6B_OFFSET UNITYSDK_OFFSET(0x621AEB0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A0585D5DEE6FF31_1_OFFSET UNITYSDK_OFFSET(0x621C200)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A0585D5DEE6FF31_OFFSET UNITYSDK_OFFSET(0x621BFF0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A6927D0798C1CDA_1_OFFSET UNITYSDK_OFFSET(0x621C300)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A6927D0798C1CDA_OFFSET UNITYSDK_OFFSET(0x621BBD0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x62192C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x6219340)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0x621AB50)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x6219130)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_255C289581420B71_OFFSET UNITYSDK_OFFSET(0x621C710)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_31933D7A1B9AEFE3_OFFSET UNITYSDK_OFFSET(0x621C7C0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x6219A30)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x621AAF0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x6219250)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x621C5A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x621C830)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_4B2556C7DD65E0D8_OFFSET UNITYSDK_OFFSET(0x621A220)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_4D9AF0772C5D0480_OFFSET UNITYSDK_OFFSET(0x6219AC0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_565B23350997A3F9_OFFSET UNITYSDK_OFFSET(0x621C450)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_5C644800CA1C5587_OFFSET UNITYSDK_OFFSET(0x6219460)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_70134DB3816DC5AE_OFFSET UNITYSDK_OFFSET(0x621ABD0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x621C630)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_782C2E4E446641D7_OFFSET UNITYSDK_OFFSET(0x621BB30)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8417CDEB7B154E29_1_OFFSET UNITYSDK_OFFSET(0x621C0F0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8417CDEB7B154E29_OFFSET UNITYSDK_OFFSET(0x621BC70)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8B5519E0E1747D4E_OFFSET UNITYSDK_OFFSET(0x621C3A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8BAA4FB7D9C1E719_OFFSET UNITYSDK_OFFSET(0x621BE30)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8D4118C8A6074696_OFFSET UNITYSDK_OFFSET(0x621C510)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A5E8F32B3838589E_1_OFFSET UNITYSDK_OFFSET(0x621BD80)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A5E8F32B3838589E_OFFSET UNITYSDK_OFFSET(0x62193B0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A847AED19A77B516_OFFSET UNITYSDK_OFFSET(0x6219C90)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_C0B52E1F228C38E1_OFFSET UNITYSDK_OFFSET(0x621A0E0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_C946F64728403EED_OFFSET UNITYSDK_OFFSET(0x6218F50)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x62191A0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_CBB16AE705BCA424_OFFSET UNITYSDK_OFFSET(0x621AA70)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_CD3D78B7FEDE99CF_OFFSET UNITYSDK_OFFSET(0x621B610)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_D081DE6122DA87FE_OFFSET UNITYSDK_OFFSET(0x62197F0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_E7BC66F94B7A6CBF_OFFSET UNITYSDK_OFFSET(0x621A5B0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x621BAC0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x6218D90)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_TypeDefinitionIndex = 61541;

	class ScopedOverShoulderCamera : public ::System::Object
	{
	public:
		::MoleMole::Utils::TaskBasedEventCollection_1<::MoleMole::Cameras::ScopedOverShoulderCamera_Enum_3_55C6DDFDFD9F932E>* _events; // 0x10
		::System::Boolean _isCameraSetup; // 0x18
		::System::Boolean _blendInAimingEnabled; // 0x19
		::System::Single _blendInTime; // 0x1C
		::MoleMole::Cameras::OverShoulderCameraData _cameraData; // 0x20
		::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* _subModule; // 0x1E8
		::UnityEngine::Vector3 _lastVisualFocusPosition; // 0x1F0
		::System::Boolean _isMuteManualRotate; // 0x1FC

		::System::Void _ctor(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
		}

		::System::Single Method_1_A5E8F32B3838589E(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a2, ::MoleMole::Cameras::CameraTrackBlending* a3)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A5E8F32B3838589E_OFFSET))(this, a1, a2, a3);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_5C644800CA1C5587(::System::Single a1, ::System::Single a2)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_5C644800CA1C5587_OFFSET))(this, a1, a2);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_D081DE6122DA87FE(::System::Single a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_D081DE6122DA87FE_OFFSET))(this, a1);
		}

		::System::String* Method_1_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::Boolean Method_1_4D9AF0772C5D0480(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_4D9AF0772C5D0480_OFFSET))(this, a1);
		}

		::System::Void Method_1_A847AED19A77B516(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a3, ::PipelineCamera::CameraCommandSpawnSubModules*& a4, ::PipelineCamera::CameraCommandUnSpawnSubModules*& a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A847AED19A77B516_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single Method_1_E7BC66F94B7A6CBF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_E7BC66F94B7A6CBF_OFFSET))(this);
		}

		::System::Void Method_1_CBB16AE705BCA424(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_CBB16AE705BCA424_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1D4018D4200358D0_3_OFFSET))(this);
		}

		::PipelineCamera::ScopedDelegateHandle Method_1_70134DB3816DC5AE(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a3)
		{
			return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_70134DB3816DC5AE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_0E1BDEE095A16B6B(::MoleMole::Cameras::OverShoulderCameraConfig*& a1, ::Struct_2_52A902145F5BE513_1& a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*&, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_0E1BDEE095A16B6B_OFFSET))(this, a1, a2, a3);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_CD3D78B7FEDE99CF(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_CD3D78B7FEDE99CF_OFFSET))(this, a1);
		}

		::System::Single Method_1_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_782C2E4E446641D7(::UnityEngine::Vector3 a1)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_782C2E4E446641D7_OFFSET))(this, a1);
		}

		::System::String* Method_1_1A6927D0798C1CDA(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a2, ::MoleMole::Cameras::CameraTrackBlending* a3)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A6927D0798C1CDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_1_8417CDEB7B154E29()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8417CDEB7B154E29_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid Method_1_C946F64728403EED(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1 a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_C946F64728403EED_OFFSET))(this, a1, a2, a3);
		}

		::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_4B2556C7DD65E0D8(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2)
		{
			return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_4B2556C7DD65E0D8_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_1_8BAA4FB7D9C1E719(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8BAA4FB7D9C1E719_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_1A0585D5DEE6FF31()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A0585D5DEE6FF31_OFFSET))(this);
		}

		::System::Single Method_1_8417CDEB7B154E29_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8417CDEB7B154E29_1_OFFSET))(this);
		}

		::System::String* Method_1_1A0585D5DEE6FF31_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A0585D5DEE6FF31_1_OFFSET))(this);
		}

		::System::Single Method_1_0781F88D06095A03(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_0781F88D06095A03_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_1_8B5519E0E1747D4E(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8B5519E0E1747D4E_OFFSET))(this, a1);
		}

		static ::MoleMole::Cameras::ScopedOverShoulderCamera* Method_1_565B23350997A3F9(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a3)
		{
			return ((::MoleMole::Cameras::ScopedOverShoulderCamera*(*)(::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_565B23350997A3F9_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_1_8D4118C8A6074696(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_8D4118C8A6074696_OFFSET))(this, a1);
		}

		::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_77577333B4681208()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_77577333B4681208_OFFSET))(this);
		}

		::System::Single Method_1_A5E8F32B3838589E_1(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a2, ::MoleMole::Cameras::CameraTrackBlending* a3)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_A5E8F32B3838589E_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_255C289581420B71(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_255C289581420B71_OFFSET))(this, a1, a2);
		}

		::MoleMole::Cameras::OverShoulderCameraConfig* Method_1_31933D7A1B9AEFE3()
		{
			return ((::MoleMole::Cameras::OverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_31933D7A1B9AEFE3_OFFSET))(this);
		}

		::System::String* Method_1_1A6927D0798C1CDA_1(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* a2, ::MoleMole::Cameras::CameraTrackBlending* a3)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_1A6927D0798C1CDA_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
		}

		::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>* Method_1_C0B52E1F228C38E1(::MoleMole::Cameras::OverShoulderCameraConfig* a1, ::Struct_2_52A902145F5BE513_1& a2)
		{
			return ((::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::Struct_2_52A902145F5BE513_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_METHOD_1_C0B52E1F228C38E1_OFFSET))(this, a1, a2);
		}
	};
}
