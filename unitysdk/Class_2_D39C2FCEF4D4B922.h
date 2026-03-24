#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_2A3859B4230FECE9.h"
#include "unitysdk/Enum_3_39314FE2DF215333.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/MoleMole/Cameras/CameraDelayMoveDataBlendDefinition.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/PipelineCamera/InterpCurve_1.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9DAA93B261093A09;
class Class_1_A422B5C99AB5650D;
class Class_1_B8576B54B40B3FB0;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CameraDelayDatas; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_002A3C2EF46C74CF_OFFSET UNITYSDK_OFFSET(0x9B78370)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0x9B78300)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_0841DD481C9E7631_OFFSET UNITYSDK_OFFSET(0x9B74FA0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_0CC78D4556EB7518_OFFSET UNITYSDK_OFFSET(0x9B75A80)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_0ECCCB67C31BD45B_OFFSET UNITYSDK_OFFSET(0x9B770A0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x9B780C0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_2541F0C25622ECD9_OFFSET UNITYSDK_OFFSET(0x9B74AC0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_25EC27153ED46963_OFFSET UNITYSDK_OFFSET(0x9B786A0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_377FB896229E27DD_OFFSET UNITYSDK_OFFSET(0x9B78BA0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_3A43654647DF6A74_OFFSET UNITYSDK_OFFSET(0x9B759D0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_3AF977ABBC8283D6_OFFSET UNITYSDK_OFFSET(0x9B77EC0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_421ECE05A9FEB34D_OFFSET UNITYSDK_OFFSET(0x9B74ED0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_42F584F3983A9ACF_OFFSET UNITYSDK_OFFSET(0x9B77890)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_4DA895CFB760E2A1_1_OFFSET UNITYSDK_OFFSET(0x9B76BB0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_4DA895CFB760E2A1_2_OFFSET UNITYSDK_OFFSET(0x9B78A40)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_4DA895CFB760E2A1_OFFSET UNITYSDK_OFFSET(0x9B769D0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_575495378A53B008_OFFSET UNITYSDK_OFFSET(0x9B77670)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_5EF9DDA5070B0261_OFFSET UNITYSDK_OFFSET(0x9B74CE0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_656CD7CD7E175989_OFFSET UNITYSDK_OFFSET(0x9B75B80)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_70459B7C790C82DB_OFFSET UNITYSDK_OFFSET(0x9B77F40)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x9B77B40)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_9818E41BDCF3063A_OFFSET UNITYSDK_OFFSET(0x9B75740)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_991C84568C655F51_OFFSET UNITYSDK_OFFSET(0x9B779F0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x9B74730)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x9B78630)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_AF83D5EA21386D95_OFFSET UNITYSDK_OFFSET(0x9B775B0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_B7F8E960CB973ADC_OFFSET UNITYSDK_OFFSET(0x9B751C0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_CF242B0F311AA6EB_OFFSET UNITYSDK_OFFSET(0x9B78490)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_CF6EEB0206D60DE3_OFFSET UNITYSDK_OFFSET(0x9B789A0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_DA624ED5E7AFDE43_1_OFFSET UNITYSDK_OFFSET(0x9B780D0)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_DA624ED5E7AFDE43_OFFSET UNITYSDK_OFFSET(0x9B75950)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_DD360325DD9325C8_OFFSET UNITYSDK_OFFSET(0x9B76D60)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_E1101755D700590F_OFFSET UNITYSDK_OFFSET(0x9B74740)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_EDBFE3C4D4F7A857_OFFSET UNITYSDK_OFFSET(0x9B76B30)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_F343EB366B5A896D_OFFSET UNITYSDK_OFFSET(0x9B78410)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_F7A2740694EB100F_OFFSET UNITYSDK_OFFSET(0x9B78830)
#define CLASS_2_D39C2FCEF4D4B922_METHOD_2_FFFEA3B2FB2730AD_OFFSET UNITYSDK_OFFSET(0x9B76D10)
#define CLASS_2_D39C2FCEF4D4B922__CTOR_OFFSET UNITYSDK_OFFSET(0x9B76440)

inline static constexpr unsigned int Class_2_D39C2FCEF4D4B922_TypeDefinitionIndex = 41470;

class Class_2_D39C2FCEF4D4B922 : public ::Class_1_2A3859B4230FECE9
{
public:
	::MoleMole::Cameras::CameraDelayMoveDataBlendDefinition Field_2_2; // 0x38
	::MoleMole::CameraDelayDatas* Field_2_7; // 0x50
	::MoleMole::CameraDelayDatas* Field_2_8; // 0x58
	::Class_1_9DAA93B261093A09* Field_2_1; // 0x60
	::Cinemachine::CameraState Field_2_11; // 0x68
	::MoleMole::CameraDelayDatas* Field_2_10; // 0x150
	::MoleMole::CameraDelayDatas* Field_2_9; // 0x158
	::System::Collections::Generic::List_1<::Class_1_B8576B54B40B3FB0*>* Field_2_4; // 0x160
	::Class_1_9DAA93B261093A09* Field_2_12; // 0x168
	::MoleMole::CameraDelayDatas* Field_2_6; // 0x170
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_2_0; // 0x178
	::Class_1_A422B5C99AB5650D* Field_2_3; // 0x180
	::MoleMole::Config::CameraDelayMoveMode Field_2_5; // 0x188

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_E1101755D700590F(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_E1101755D700590F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5EF9DDA5070B0261(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_5EF9DDA5070B0261_OFFSET))(this, a1);
	}

	::System::Void Method_2_421ECE05A9FEB34D(::Enum_3_39314FE2DF215333 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_39314FE2DF215333))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_421ECE05A9FEB34D_OFFSET))(this, a1);
	}

	::System::Void Method_2_0841DD481C9E7631(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_0841DD481C9E7631_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9818E41BDCF3063A(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_9818E41BDCF3063A_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA624ED5E7AFDE43(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_DA624ED5E7AFDE43_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3A43654647DF6A74(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_3A43654647DF6A74_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4DA895CFB760E2A1(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_4DA895CFB760E2A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2541F0C25622ECD9(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_2541F0C25622ECD9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EDBFE3C4D4F7A857(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_EDBFE3C4D4F7A857_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4DA895CFB760E2A1_1(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_4DA895CFB760E2A1_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_656CD7CD7E175989(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_656CD7CD7E175989_OFFSET))(this, a1, a2);
	}

	::Class_1_9DAA93B261093A09* Method_2_24748FC20F375725()
	{
		return ((::Class_1_9DAA93B261093A09*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_DA624ED5E7AFDE43_1(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2, ::MoleMole::Cameras::CameraAvatarPrepareData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&, ::MoleMole::Cameras::CameraAvatarPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_DA624ED5E7AFDE43_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0CC78D4556EB7518(::System::Single a1, ::Struct_2_7E9A981C4706FCC7& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_0CC78D4556EB7518_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_3AF977ABBC8283D6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_3AF977ABBC8283D6_OFFSET))(this);
	}

	::System::Void Method_2_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_04DC58A6E3312864_OFFSET))(this, a1);
	}

	::System::Void Method_2_002A3C2EF46C74CF(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_002A3C2EF46C74CF_OFFSET))(this, a1);
	}

	::MoleMole::CameraDelayDatas* Method_2_42F584F3983A9ACF()
	{
		return ((::MoleMole::CameraDelayDatas*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_42F584F3983A9ACF_OFFSET))(this);
	}

	::System::Void Method_2_F343EB366B5A896D(::Cinemachine::CinemachineVirtualCameraBase* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_F343EB366B5A896D_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CameraState Method_2_FFFEA3B2FB2730AD()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_FFFEA3B2FB2730AD_OFFSET))(this);
	}

	::Class_1_9DAA93B261093A09* Method_2_575495378A53B008(::MoleMole::Config::CameraDelayMoveMode a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::Class_1_9DAA93B261093A09*(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_575495378A53B008_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AA8656BCDBBD4870(::Enum_3_39314FE2DF215333 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_39314FE2DF215333))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0ECCCB67C31BD45B(::System::Single a1, ::MoleMole::Config::CameraDelayMoveMode& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::Config::CameraDelayMoveMode&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_0ECCCB67C31BD45B_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CameraState Method_2_DD360325DD9325C8(::UnityEngine::Vector3 a1)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_DD360325DD9325C8_OFFSET))(this, a1);
	}

	::System::Single Method_2_B7F8E960CB973ADC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_B7F8E960CB973ADC_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_9DAA93B261093A09* Method_2_25EC27153ED46963(::MoleMole::CameraDelayDatas* a1, ::MoleMole::CameraDelayDatas* a2, ::UnityEngine::AnimationCurve* a3, ::System::Single a4, ::System::Single a5, ::Class_1_9DAA93B261093A09* a6)
	{
		return ((::Class_1_9DAA93B261093A09*(*)(::PVOID, ::MoleMole::CameraDelayDatas*, ::MoleMole::CameraDelayDatas*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::Class_1_9DAA93B261093A09*))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_25EC27153ED46963_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_9DAA93B261093A09* Method_2_CF242B0F311AA6EB(::System::Single a1)
	{
		return ((::Class_1_9DAA93B261093A09*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_CF242B0F311AA6EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_2_F7A2740694EB100F(::MoleMole::Config::CameraDelayMoveMode a1, ::MoleMole::Config::CameraDelayMoveMode a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode, ::MoleMole::Config::CameraDelayMoveMode, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_F7A2740694EB100F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_991C84568C655F51(::MoleMole::CameraDelayDatas* a1, ::MoleMole::CameraDelayDatas*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraDelayDatas*, ::MoleMole::CameraDelayDatas*&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_991C84568C655F51_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CF6EEB0206D60DE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_CF6EEB0206D60DE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4DA895CFB760E2A1_2(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_4DA895CFB760E2A1_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_70459B7C790C82DB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_70459B7C790C82DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AF83D5EA21386D95(::MoleMole::Config::CameraDelayMoveMode a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_AF83D5EA21386D95_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_377FB896229E27DD(::Il2CppArray<::MoleMole::CameraOrbit>* a1, ::MoleMole::CameraOrbit a2, ::System::Single a3, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2>& a4, ::UnityEngine::Vector2& a5, ::System::Single& a6)
	{
		return ((::System::Void(*)(::Il2CppArray<::MoleMole::CameraOrbit>*, ::MoleMole::CameraOrbit, ::System::Single, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2>&, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_D39C2FCEF4D4B922_METHOD_2_377FB896229E27DD_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
