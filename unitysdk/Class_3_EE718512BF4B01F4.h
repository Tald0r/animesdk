#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_2_63E7C24ABD5B7FB1.h"
#include "unitysdk/Class_3_EE718512BF4B01F4_Enum_3_C7BE316486E8D1C1.h"
#include "unitysdk/Enum_3_63CBB842CA136655.h"
#include "unitysdk/MoleMole/CameraAxis.h"
#include "unitysdk/MoleMole/Cameras/VCameraAxisState.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2A3859B4230FECE9;
class Class_1_8289F2785D9AA990;
class Class_2_292DBB78EBC97A79;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CameraScreenDragConfig; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }

#define CLASS_3_EE718512BF4B01F4_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAA38080)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_22E9F1576FD155B8_OFFSET UNITYSDK_OFFSET(0xAA37800)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xAA37ED0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xAA37BD0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xAA36470)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xAA380F0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAA367E0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_3B0D01A30F6EC764_OFFSET UNITYSDK_OFFSET(0xAA37CC0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0xAA37D80)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_65810D41598FEE43_OFFSET UNITYSDK_OFFSET(0xAA37AF0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_1_OFFSET UNITYSDK_OFFSET(0xAA379F0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_2_OFFSET UNITYSDK_OFFSET(0xAA37E30)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0xAA37760)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_9E950EEFE9A3C454_OFFSET UNITYSDK_OFFSET(0xAA37AE0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_A27DC2C5A103933A_1_OFFSET UNITYSDK_OFFSET(0xAA36840)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xAA36560)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xAA36010)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_C561FF611C07A44C_1_OFFSET UNITYSDK_OFFSET(0xAA381C0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xAA381B0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0xAA37950)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_C61792AC6C3D82FB_OFFSET UNITYSDK_OFFSET(0xAA36B60)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAA37FC0)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xAA38150)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAA37A80)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_D2DAD824A8B3FDC1_OFFSET UNITYSDK_OFFSET(0xAA36C10)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_E216FE5BAD77F9A6_OFFSET UNITYSDK_OFFSET(0xAA36020)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_EDBFE3C4D4F7A857_OFFSET UNITYSDK_OFFSET(0xAA37F40)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_EEDBBB3CF0D5E419_OFFSET UNITYSDK_OFFSET(0xAA36900)
#define CLASS_3_EE718512BF4B01F4_METHOD_3_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xAA363E0)
#define CLASS_3_EE718512BF4B01F4__CTOR_OFFSET UNITYSDK_OFFSET(0xAA377F0)

inline static constexpr unsigned int Class_3_EE718512BF4B01F4_TypeDefinitionIndex = 38519;

class Class_3_EE718512BF4B01F4 : public ::Class_2_63E7C24ABD5B7FB1
{
public:
	::Class_1_8289F2785D9AA990* Field_3_16; // 0x50
	::MoleMole::CameraScreenDragConfig* Field_3_8; // 0x58
	::Class_2_292DBB78EBC97A79* Field_3_1; // 0x60
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_3_0; // 0x68
	::UnityEngine::Vector2 Field_3_13; // 0x70
	::System::Single Field_3_15; // 0x78
	::System::Single Field_3_6; // 0x7C
	::System::Single Field_3_7; // 0x80
	::System::Int32 Field_3_11; // 0x84
	::Class_3_EE718512BF4B01F4_Enum_3_C7BE316486E8D1C1 Field_3_17; // 0x88
	::MoleMole::Cameras::VCameraAxisState Field_3_2; // 0x8C
	::MoleMole::CameraAxis Field_3_5; // 0xB4
	::System::Single Field_3_14; // 0xC4
	::System::Boolean Field_3_12; // 0xC8
	::System::Boolean Field_3_10; // 0xC9
	::MoleMole::Cameras::VCameraAxisState Field_3_3; // 0xCC
	::MoleMole::Config::CameraDelayMoveMode Field_3_9; // 0xF4
	::MoleMole::CameraAxis Field_3_4; // 0xF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4__CTOR_OFFSET))(this);
	}

	::Enum_3_63CBB842CA136655 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_63CBB842CA136655(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_E216FE5BAD77F9A6(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Class_1_2A3859B4230FECE9* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Class_1_2A3859B4230FECE9*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_E216FE5BAD77F9A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_3_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_A27DC2C5A103933A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_A27DC2C5A103933A_1_OFFSET))(this);
	}

	::System::Void Method_3_EEDBBB3CF0D5E419(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_EEDBBB3CF0D5E419_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_22E9F1576FD155B8(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_22E9F1576FD155B8_OFFSET))(this, a1, a2);
	}

	::System::Single Method_3_C5F9823D509784CD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_C5F9823D509784CD_OFFSET))(this, a1);
	}

	::System::Void Method_3_7889E856344009E9_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_9E950EEFE9A3C454(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Class_1_2A3859B4230FECE9* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Class_1_2A3859B4230FECE9*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_9E950EEFE9A3C454_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_65810D41598FEE43(::MoleMole::CameraAxis a1, ::MoleMole::CameraAxis a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraAxis, ::MoleMole::CameraAxis))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_65810D41598FEE43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Single Method_3_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7889E856344009E9_2(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_7889E856344009E9_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_EDBFE3C4D4F7A857(::System::Single a1, ::Cinemachine::CameraState& a2, ::Struct_2_7E9A981C4706FCC7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Cinemachine::CameraState&, ::Struct_2_7E9A981C4706FCC7&))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_EDBFE3C4D4F7A857_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_3_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_3_C61792AC6C3D82FB(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_C61792AC6C3D82FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3B0D01A30F6EC764(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_3B0D01A30F6EC764_OFFSET))(this, a1);
	}

	::System::Void Method_3_D2DAD824A8B3FDC1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_D2DAD824A8B3FDC1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C561FF611C07A44C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE718512BF4B01F4_METHOD_3_C561FF611C07A44C_1_OFFSET))(this);
	}
};
