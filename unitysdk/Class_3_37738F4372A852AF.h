#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_63E7C24ABD5B7FB1.h"
#include "unitysdk/Class_3_37738F4372A852AF_Enum_3_3E8508FFF5901590.h"
#include "unitysdk/Class_3_37738F4372A852AF_Enum_3_6E0DDBC37145F2BE.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/Enum_3_8252736F97D4CFA3.h"
#include "unitysdk/MoleMole/Cameras/CameraFollowCalcData.h"
#include "unitysdk/MoleMole/Cameras/FollowData.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2A3859B4230FECE9;
class Class_1_CB7F0487F7A6164A;
class Class_2_292DBB78EBC97A79;
class Class_3_7472FB6CC4015359;
class Class_3_F35B080B137ECC46;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CameraLockTargetConfig; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole { class CameraModuleLockRotateData; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_37738F4372A852AF_METHOD_3_04DC58A6E3312864_1_OFFSET UNITYSDK_OFFSET(0x91BD870)
#define CLASS_3_37738F4372A852AF_METHOD_3_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0x91BB070)
#define CLASS_3_37738F4372A852AF_METHOD_3_055FA25FA4E1A169_OFFSET UNITYSDK_OFFSET(0x91BD210)
#define CLASS_3_37738F4372A852AF_METHOD_3_07837442FF259ACF_OFFSET UNITYSDK_OFFSET(0x91BCF20)
#define CLASS_3_37738F4372A852AF_METHOD_3_0F56D5DC9847C4D5_OFFSET UNITYSDK_OFFSET(0x91BB170)
#define CLASS_3_37738F4372A852AF_METHOD_3_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x91BAF10)
#define CLASS_3_37738F4372A852AF_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x91BAA40)
#define CLASS_3_37738F4372A852AF_METHOD_3_12BEB47623AAA989_OFFSET UNITYSDK_OFFSET(0x91BB300)
#define CLASS_3_37738F4372A852AF_METHOD_3_184D2FD010EC25FA_OFFSET UNITYSDK_OFFSET(0x91BD9B0)
#define CLASS_3_37738F4372A852AF_METHOD_3_1FC19F73B7BF965F_OFFSET UNITYSDK_OFFSET(0x91BCDA0)
#define CLASS_3_37738F4372A852AF_METHOD_3_28EA8B68176735B0_OFFSET UNITYSDK_OFFSET(0x91BB5B0)
#define CLASS_3_37738F4372A852AF_METHOD_3_3B60F5DA0C05A71E_OFFSET UNITYSDK_OFFSET(0x91BB180)
#define CLASS_3_37738F4372A852AF_METHOD_3_539F62B8C39C297F_OFFSET UNITYSDK_OFFSET(0x91BB9F0)
#define CLASS_3_37738F4372A852AF_METHOD_3_54E006C624DBA246_OFFSET UNITYSDK_OFFSET(0x91BD3D0)
#define CLASS_3_37738F4372A852AF_METHOD_3_6CC7258B5ECCC536_OFFSET UNITYSDK_OFFSET(0x91BC730)
#define CLASS_3_37738F4372A852AF_METHOD_3_8623EB868C7149CB_OFFSET UNITYSDK_OFFSET(0x91BA880)
#define CLASS_3_37738F4372A852AF_METHOD_3_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x91BBAE0)
#define CLASS_3_37738F4372A852AF_METHOD_3_92B540916F43AC48_OFFSET UNITYSDK_OFFSET(0x91BD8E0)
#define CLASS_3_37738F4372A852AF_METHOD_3_9E950EEFE9A3C454_OFFSET UNITYSDK_OFFSET(0x91BCD80)
#define CLASS_3_37738F4372A852AF_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x91BA870)
#define CLASS_3_37738F4372A852AF_METHOD_3_AF1BFAC85B7620AB_OFFSET UNITYSDK_OFFSET(0x91BABE0)
#define CLASS_3_37738F4372A852AF_METHOD_3_C561FF611C07A44C_1_OFFSET UNITYSDK_OFFSET(0x91BD9A0)
#define CLASS_3_37738F4372A852AF_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x91BCD90)
#define CLASS_3_37738F4372A852AF_METHOD_3_C5FECF76FA727C1A_OFFSET UNITYSDK_OFFSET(0x91BB260)
#define CLASS_3_37738F4372A852AF_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x91BDA50)
#define CLASS_3_37738F4372A852AF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91BA9D0)
#define CLASS_3_37738F4372A852AF_METHOD_3_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x91BB4E0)
#define CLASS_3_37738F4372A852AF_METHOD_3_E3044C8564941869_OFFSET UNITYSDK_OFFSET(0x91BCD40)
#define CLASS_3_37738F4372A852AF_METHOD_3_E529A9AE3C2C2501_OFFSET UNITYSDK_OFFSET(0x91BD650)
#define CLASS_3_37738F4372A852AF__CTOR_OFFSET UNITYSDK_OFFSET(0x91BB0F0)

inline static constexpr unsigned int Class_3_37738F4372A852AF_TypeDefinitionIndex = 65550;

class Class_3_37738F4372A852AF : public ::Class_2_63E7C24ABD5B7FB1
{
public:
	// static const ::System::Single Field_3_6; // 0x0
	// static const ::System::Single Field_3_7; // 0x0
	::Class_3_7472FB6CC4015359* Field_3_3; // 0x50
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_3_0; // 0x58
	::Class_2_292DBB78EBC97A79* Field_3_1; // 0x60
	::Struct_2_FA5F50563E60AFBA Field_3_5; // 0x68
	::UnityEngine::Transform* Field_3_4; // 0x80
	::System::Collections::Generic::List_1<::System::Single>* Field_3_24; // 0x88
	::Class_3_F35B080B137ECC46* Field_3_2; // 0x90
	::System::Single Field_3_22; // 0x98
	::System::Single Field_3_15; // 0x9C
	::Class_3_37738F4372A852AF_Enum_3_6E0DDBC37145F2BE Field_3_27; // 0xA0
	::UnityEngine::Vector3 Field_3_12; // 0xA4
	::MoleMole::Cameras::FollowData Field_3_8; // 0xB0
	::UnityEngine::Vector3 Field_3_10; // 0xEC
	::System::Single Field_3_13; // 0xF8
	::System::Int32 Field_3_29; // 0xFC
	::Class_3_37738F4372A852AF_Enum_3_3E8508FFF5901590 Field_3_26; // 0x100
	::System::Boolean Field_3_28; // 0x104
	::System::Boolean Field_3_18; // 0x105
	::System::Single Field_3_21; // 0x108
	::Class_3_37738F4372A852AF_Enum_3_3E8508FFF5901590 Field_3_25; // 0x10C
	::System::Single Field_3_9; // 0x110
	::System::Boolean Field_3_16; // 0x114
	::System::Boolean Field_3_30; // 0x115
	::System::Boolean Field_3_17; // 0x116
	::System::Boolean Field_3_23; // 0x117
	::System::Single Field_3_19; // 0x118
	::System::Single Field_3_20; // 0x11C
	::System::Single Field_3_11; // 0x120
	::System::Single Field_3_14; // 0x124

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_8623EB868C7149CB(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Class_1_2A3859B4230FECE9* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Class_1_2A3859B4230FECE9*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_8623EB868C7149CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_3_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_04DC58A6E3312864_OFFSET))(this, a1);
	}

	::Class_1_CB7F0487F7A6164A* Method_3_0F56D5DC9847C4D5()
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_0F56D5DC9847C4D5_OFFSET))(this);
	}

	static ::System::Single Method_3_3B60F5DA0C05A71E(::MoleMole::CameraLockTargetConfig* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_3B60F5DA0C05A71E_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_C5FECF76FA727C1A(::MoleMole::CameraLockTargetConfig* a1, ::Class_1_CB7F0487F7A6164A* a2)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_C5FECF76FA727C1A_OFFSET))(a1, a2);
	}

	::System::Single Method_3_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_D64FD9A228A1C4E0_OFFSET))(this);
	}

	static ::System::Boolean Method_3_28EA8B68176735B0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_28EA8B68176735B0_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_921C3C3E09D59CD4_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_E3044C8564941869()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_E3044C8564941869_OFFSET))(this);
	}

	::System::Void Method_3_9E950EEFE9A3C454(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Class_1_2A3859B4230FECE9* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Class_1_2A3859B4230FECE9*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_9E950EEFE9A3C454_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}

	static ::System::Single Method_3_1FC19F73B7BF965F(::MoleMole::CameraLockTargetConfig* a1, ::Class_3_F35B080B137ECC46* a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::Class_3_F35B080B137ECC46*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_1FC19F73B7BF965F_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_07837442FF259ACF(::System::Single a1, ::System::Boolean a2, ::Enum_3_8252736F97D4CFA3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::Enum_3_8252736F97D4CFA3))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_07837442FF259ACF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_6CC7258B5ECCC536(::MoleMole::Cameras::CameraFollowCalcData a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraFollowCalcData))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_6CC7258B5ECCC536_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_12BEB47623AAA989(::MoleMole::CameraLockTargetConfig* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::MoleMole::CameraLockTargetConfig*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_12BEB47623AAA989_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_539F62B8C39C297F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_539F62B8C39C297F_OFFSET))(a1, a2, a3);
	}

	::MoleMole::CameraModuleLockRotateData* Method_3_055FA25FA4E1A169(::System::Single a1)
	{
		return ((::MoleMole::CameraModuleLockRotateData*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_055FA25FA4E1A169_OFFSET))(this, a1);
	}

	::System::Single Method_3_54E006C624DBA246(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_54E006C624DBA246_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_E529A9AE3C2C2501(::System::Single a1, ::System::Boolean a2, ::Enum_3_8252736F97D4CFA3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::Enum_3_8252736F97D4CFA3))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_E529A9AE3C2C2501_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_04DC58A6E3312864_1(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_04DC58A6E3312864_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_92B540916F43AC48(::Enum_3_8252736F97D4CFA3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_8252736F97D4CFA3))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_92B540916F43AC48_OFFSET))(this, a1);
	}

	::System::Void Method_3_C561FF611C07A44C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_C561FF611C07A44C_1_OFFSET))(this);
	}

	static ::System::Single Method_3_184D2FD010EC25FA(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_184D2FD010EC25FA_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_AF1BFAC85B7620AB(::Struct_2_FA5F50563E60AFBA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + CLASS_3_37738F4372A852AF_METHOD_3_AF1BFAC85B7620AB_OFFSET))(this, a1);
	}
};
