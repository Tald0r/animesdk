#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AnimStatic_TagGroup.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraModelSphereData; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class PipelineCameraAvatarConfigData; }
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define CLASS_1_76EB65C9562839D0_METHOD_1_033102E73C3701FF_OFFSET UNITYSDK_OFFSET(0xBDF08C0)
#define CLASS_1_76EB65C9562839D0_METHOD_1_06B9FDD7D0C42066_OFFSET UNITYSDK_OFFSET(0xBDEF7F0)
#define CLASS_1_76EB65C9562839D0_METHOD_1_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0xBDEFD40)
#define CLASS_1_76EB65C9562839D0_METHOD_1_10BF263B62555F04_OFFSET UNITYSDK_OFFSET(0xBDEE230)
#define CLASS_1_76EB65C9562839D0_METHOD_1_32E236168AEB38DD_OFFSET UNITYSDK_OFFSET(0xBDEFEB0)
#define CLASS_1_76EB65C9562839D0_METHOD_1_353B0C4D431FD281_OFFSET UNITYSDK_OFFSET(0xBDEEE30)
#define CLASS_1_76EB65C9562839D0_METHOD_1_4A7C1205AFC847BF_OFFSET UNITYSDK_OFFSET(0xBDEEF50)
#define CLASS_1_76EB65C9562839D0_METHOD_1_54C4999AD8BA51B0_OFFSET UNITYSDK_OFFSET(0xBDF0FD0)
#define CLASS_1_76EB65C9562839D0_METHOD_1_566335D98C3D7ED1_OFFSET UNITYSDK_OFFSET(0xBDEF640)
#define CLASS_1_76EB65C9562839D0_METHOD_1_C583489595BE9277_OFFSET UNITYSDK_OFFSET(0xBDEE410)
#define CLASS_1_76EB65C9562839D0_METHOD_1_C9FF89A9419BC628_OFFSET UNITYSDK_OFFSET(0xBDEEAB0)
#define CLASS_1_76EB65C9562839D0_METHOD_1_D239698B2179BA62_OFFSET UNITYSDK_OFFSET(0xBDF0D30)
#define CLASS_1_76EB65C9562839D0_METHOD_1_D3E49024845D61C2_OFFSET UNITYSDK_OFFSET(0xBDEF2E0)
#define CLASS_1_76EB65C9562839D0_METHOD_1_D45A74B416EBF9E1_OFFSET UNITYSDK_OFFSET(0xBDF0200)
#define CLASS_1_76EB65C9562839D0_METHOD_1_F37D38EA54150DC3_OFFSET UNITYSDK_OFFSET(0xBDF0070)
#define CLASS_1_76EB65C9562839D0_METHOD_1_F84A07D89A8F09CE_OFFSET UNITYSDK_OFFSET(0xBDEEBF0)
#define CLASS_1_76EB65C9562839D0__CTOR_OFFSET UNITYSDK_OFFSET(0xBDEE220)

inline static constexpr unsigned int Class_1_76EB65C9562839D0_TypeDefinitionIndex = 58603;

class Class_1_76EB65C9562839D0 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_10BF263B62555F04(::UnityEngine::Camera* a1, ::System::Single a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::System::Single, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_10BF263B62555F04_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_C9FF89A9419BC628(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_C9FF89A9419BC628_OFFSET))(a1);
	}

	static ::System::Single Method_1_F84A07D89A8F09CE(::MoleMole::Cameras::CameraAvatarPrepareData* a1, ::MoleMole::Config::InlevelCameraState a2)
	{
		return ((::System::Single(*)(::MoleMole::Cameras::CameraAvatarPrepareData*, ::MoleMole::Config::InlevelCameraState))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_F84A07D89A8F09CE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_353B0C4D431FD281(::MoleMole::Cameras::CameraDataAccessor* a1, ::MoleMole::AnimStatic_TagGroup a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Cameras::CameraDataAccessor*, ::MoleMole::AnimStatic_TagGroup))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_353B0C4D431FD281_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_4A7C1205AFC847BF(::UnityEngine::RaycastHit& a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::UnityEngine::RaycastHit&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_4A7C1205AFC847BF_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C583489595BE9277(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_C583489595BE9277_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Single Method_1_566335D98C3D7ED1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single& a7)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_566335D98C3D7ED1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::UnityEngine::Vector3 Method_1_06B9FDD7D0C42066(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_06B9FDD7D0C42066_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_10867B69EFBCA83E_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_32E236168AEB38DD(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_32E236168AEB38DD_OFFSET))(a1);
	}

	static ::MoleMole::CameraModelSphereData* Method_1_F37D38EA54150DC3(::MoleMole::Config::PipelineCameraAvatarConfigData* a1, ::MoleMole::CameraModuleAvatarDataConfigExt* a2, ::System::String* a3)
	{
		return ((::MoleMole::CameraModelSphereData*(*)(::MoleMole::Config::PipelineCameraAvatarConfigData*, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_F37D38EA54150DC3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_D3E49024845D61C2(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::Il2CppArray<::UnityEngine::Vector3>* a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_D3E49024845D61C2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_D45A74B416EBF9E1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Single& a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Single&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_D45A74B416EBF9E1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Boolean Method_1_033102E73C3701FF(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Single& a5, ::Il2CppArray<::UnityEngine::Vector3>* a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::System::Single&, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_033102E73C3701FF_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Vector3 Method_1_D239698B2179BA62(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector3& a7)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_D239698B2179BA62_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::UnityEngine::Vector2 Method_1_54C4999AD8BA51B0(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76EB65C9562839D0_METHOD_1_54C4999AD8BA51B0_OFFSET))(a1, a2, a3);
	}
};
