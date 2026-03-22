#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_81EE451546EAF862_Struct_2_31E5ECB6E0E8EB54.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_0B27C44B4222024F;
class Class_2_A2809E685EB92269;
class Class_3_7BF98046FA3EA064;
namespace MoleMole { class InteractEntryModeBuddy; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_81EE451546EAF862_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD5B0A40)
#define CLASS_3_81EE451546EAF862_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD5B1310)
#define CLASS_3_81EE451546EAF862_METHOD_3_0AEB0071E9FEC572_OFFSET UNITYSDK_OFFSET(0xD5B4B00)
#define CLASS_3_81EE451546EAF862_METHOD_3_137632EB719C01F4_OFFSET UNITYSDK_OFFSET(0xD5B2E90)
#define CLASS_3_81EE451546EAF862_METHOD_3_3EEC78C50FD8C296_OFFSET UNITYSDK_OFFSET(0xD5B46C0)
#define CLASS_3_81EE451546EAF862_METHOD_3_4543C72191C0EF55_OFFSET UNITYSDK_OFFSET(0xD5B3A60)
#define CLASS_3_81EE451546EAF862_METHOD_3_4C6BC78B518FF7C9_OFFSET UNITYSDK_OFFSET(0xD5B41D0)
#define CLASS_3_81EE451546EAF862_METHOD_3_51EAB511EFE6C2C3_OFFSET UNITYSDK_OFFSET(0xD5B3BA0)
#define CLASS_3_81EE451546EAF862_METHOD_3_5C4495AA98EE3265_OFFSET UNITYSDK_OFFSET(0xD5B2230)
#define CLASS_3_81EE451546EAF862_METHOD_3_6956CF287C5481CB_OFFSET UNITYSDK_OFFSET(0xD5B31B0)
#define CLASS_3_81EE451546EAF862_METHOD_3_69F9975CDFA0163D_OFFSET UNITYSDK_OFFSET(0xD5B3410)
#define CLASS_3_81EE451546EAF862_METHOD_3_6F95795CCA57014F_OFFSET UNITYSDK_OFFSET(0xD5B3F30)
#define CLASS_3_81EE451546EAF862_METHOD_3_76DF95DCF820360A_OFFSET UNITYSDK_OFFSET(0xD5B3DE0)
#define CLASS_3_81EE451546EAF862_METHOD_3_7EE99EE6AA394745_OFFSET UNITYSDK_OFFSET(0xD5B4D80)
#define CLASS_3_81EE451546EAF862_METHOD_3_8845600F915DC6BF_OFFSET UNITYSDK_OFFSET(0xD5B4CC0)
#define CLASS_3_81EE451546EAF862_METHOD_3_8C04F73F2834E900_OFFSET UNITYSDK_OFFSET(0xD5B1530)
#define CLASS_3_81EE451546EAF862_METHOD_3_91EE25AF2288E449_OFFSET UNITYSDK_OFFSET(0xD5B4F90)
#define CLASS_3_81EE451546EAF862_METHOD_3_92EEB198074DA183_OFFSET UNITYSDK_OFFSET(0xD5B44A0)
#define CLASS_3_81EE451546EAF862_METHOD_3_AB183B6E9F6AAF50_OFFSET UNITYSDK_OFFSET(0xD5B2D10)
#define CLASS_3_81EE451546EAF862_METHOD_3_AE1A1C9B15A2222F_OFFSET UNITYSDK_OFFSET(0xD5B1DD0)
#define CLASS_3_81EE451546EAF862_METHOD_3_B1036099F932819B_OFFSET UNITYSDK_OFFSET(0xD5B38C0)
#define CLASS_3_81EE451546EAF862_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xD5B3140)
#define CLASS_3_81EE451546EAF862_METHOD_3_BBCC95CFE1A67176_OFFSET UNITYSDK_OFFSET(0xD5B2AE0)
#define CLASS_3_81EE451546EAF862_METHOD_3_BE2DB397E987AE49_OFFSET UNITYSDK_OFFSET(0xD5B4A10)
#define CLASS_3_81EE451546EAF862_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD5B2090)
#define CLASS_3_81EE451546EAF862_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD5B2030)
#define CLASS_3_81EE451546EAF862_METHOD_3_CF5CACF693399788_OFFSET UNITYSDK_OFFSET(0xD5B4500)
#define CLASS_3_81EE451546EAF862_METHOD_3_D93D936FA4AF7C93_OFFSET UNITYSDK_OFFSET(0xD5B20F0)
#define CLASS_3_81EE451546EAF862_UPDATE_OFFSET UNITYSDK_OFFSET(0xD5B1110)
#define CLASS_3_81EE451546EAF862__CTOR_OFFSET UNITYSDK_OFFSET(0xD5B1510)

inline static constexpr unsigned int Class_3_81EE451546EAF862_TypeDefinitionIndex = 42355;

class Class_3_81EE451546EAF862 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_8C04F73F2834E900(::Class_3_7BF98046FA3EA064* a1, ::Class_2_A2809E685EB92269* a2)
	{
		return ((::System::Void(*)(::Class_3_7BF98046FA3EA064*, ::Class_2_A2809E685EB92269*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_8C04F73F2834E900_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_D93D936FA4AF7C93(::MoleMole::Battle::Entity*& a1, ::Class_3_7BF98046FA3EA064*& a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*&, ::Class_3_7BF98046FA3EA064*&))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_D93D936FA4AF7C93_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BBCC95CFE1A67176(::Class_2_0B27C44B4222024F* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0B27C44B4222024F*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_BBCC95CFE1A67176_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_AB183B6E9F6AAF50(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_AB183B6E9F6AAF50_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6956CF287C5481CB(::Class_3_7BF98046FA3EA064* a1, ::System::Int32 a2, ::System::Func_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::Class_3_7BF98046FA3EA064*, ::System::Int32, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_6956CF287C5481CB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_B1036099F932819B(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_B1036099F932819B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4543C72191C0EF55(::Class_3_81EE451546EAF862_Struct_2_31E5ECB6E0E8EB54& a1)
	{
		return ((::System::Void(*)(::Class_3_81EE451546EAF862_Struct_2_31E5ECB6E0E8EB54&))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_4543C72191C0EF55_OFFSET))(a1);
	}

	static ::System::Void Method_3_51EAB511EFE6C2C3(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_51EAB511EFE6C2C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_76DF95DCF820360A(::MoleMole::Battle::Entity* a1, ::MoleMole::InteractEntryModeBuddy* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::InteractEntryModeBuddy*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_76DF95DCF820360A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5C4495AA98EE3265(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_5C4495AA98EE3265_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4C6BC78B518FF7C9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_4C6BC78B518FF7C9_OFFSET))(a1);
	}

	static ::System::Void Method_3_92EEB198074DA183(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_92EEB198074DA183_OFFSET))(a1);
	}

	static ::System::Void Method_3_CF5CACF693399788(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_CF5CACF693399788_OFFSET))(a1, a2);
	}

	::System::Void Method_3_3EEC78C50FD8C296(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_3EEC78C50FD8C296_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6F95795CCA57014F(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_6F95795CCA57014F_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BE2DB397E987AE49(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_BE2DB397E987AE49_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_3_0AEB0071E9FEC572(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_0AEB0071E9FEC572_OFFSET))(a1);
	}

	static ::System::Void Method_3_8845600F915DC6BF(::MoleMole::Battle::Entity*& a1, ::Class_3_7BF98046FA3EA064*& a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*&, ::Class_3_7BF98046FA3EA064*&))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_8845600F915DC6BF_OFFSET))(a1, a2);
	}

	::System::Void Method_3_7EE99EE6AA394745(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_7EE99EE6AA394745_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_137632EB719C01F4(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_137632EB719C01F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_69F9975CDFA0163D(::Class_3_7BF98046FA3EA064* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_7BF98046FA3EA064*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_69F9975CDFA0163D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AE1A1C9B15A2222F(::MoleMole::Battle::Entity* a1, ::Class_3_7BF98046FA3EA064* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_7BF98046FA3EA064*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_AE1A1C9B15A2222F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_91EE25AF2288E449(::MoleMole::Battle::Entity* a1, ::Class_2_A2809E685EB92269* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Class_2_A2809E685EB92269*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_91EE25AF2288E449_OFFSET))(a1, a2);
	}
};
