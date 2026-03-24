#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BB0E1DD4C880324C.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_6FCFA2277D52B2CC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_204C453CC79AE4E0;
class Class_1_6657081C8A94CA44;
class Class_2_208CC9941471731A_808;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_0651AA5046861BAB_OFFSET UNITYSDK_OFFSET(0xD4AB670)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_06DB39AA74C933A6_OFFSET UNITYSDK_OFFSET(0xD4AA6C0)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_0F42923FC2842D5B_OFFSET UNITYSDK_OFFSET(0xD4AAC50)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_161804062D142275_OFFSET UNITYSDK_OFFSET(0xD4AB9B0)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_1742CC6082AF8D7B_OFFSET UNITYSDK_OFFSET(0xD4AD250)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_285A985B7FCC813A_OFFSET UNITYSDK_OFFSET(0xD4ABD40)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_3D2905F5BCAF31A1_OFFSET UNITYSDK_OFFSET(0xD4ABE40)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_553B41C5738ECC42_OFFSET UNITYSDK_OFFSET(0xD4ACD70)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_58D409B3F1EEB758_OFFSET UNITYSDK_OFFSET(0xD4AA5D0)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_5CAFC7F339044F14_OFFSET UNITYSDK_OFFSET(0xD4AB130)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_7642E9CE17CC35E4_OFFSET UNITYSDK_OFFSET(0xD4AAE60)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_843BDD03AE28918C_OFFSET UNITYSDK_OFFSET(0xD4AAFD0)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_851E942665E34CC6_OFFSET UNITYSDK_OFFSET(0xD4AD1B0)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_860CA5F408151004_OFFSET UNITYSDK_OFFSET(0xD4AD130)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_956C7A6E2D0F82A1_OFFSET UNITYSDK_OFFSET(0xD4AAB00)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_9DE98A18613B53AB_OFFSET UNITYSDK_OFFSET(0xD4AD360)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_A8B30F4FB05440AA_OFFSET UNITYSDK_OFFSET(0xD4AB2F0)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_AB2E871A86C94721_OFFSET UNITYSDK_OFFSET(0xD4AD420)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_BDFE81FEA9BC8C74_OFFSET UNITYSDK_OFFSET(0xD4A9F10)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_C4DEAEE83B3E8BE5_OFFSET UNITYSDK_OFFSET(0xD4AB540)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_C8B3C6A282BD803B_OFFSET UNITYSDK_OFFSET(0xD4AC820)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_D5013D1712D74E4B_OFFSET UNITYSDK_OFFSET(0xD4AC3C0)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0xD4AB0C0)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_F2DE4246959DCEC8_OFFSET UNITYSDK_OFFSET(0xD4ABF00)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_F485487359D38A65_OFFSET UNITYSDK_OFFSET(0xD4AC6A0)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_F7E7A60997450764_OFFSET UNITYSDK_OFFSET(0xD4AD4E0)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_FD947098326DD009_OFFSET UNITYSDK_OFFSET(0xD4AB3D0)
#define CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_FE79E9ECE1F0E214_OFFSET UNITYSDK_OFFSET(0xD4ABC70)

inline static constexpr unsigned int Class_1_3361C09B71BDB2D5_Class_1_E2C115A3940BD40A_TypeDefinitionIndex = 71740;

class Class_1_3361C09B71BDB2D5_Class_1_E2C115A3940BD40A : public ::System::Object
{
public:
	static ::System::Void Method_1_BDFE81FEA9BC8C74(::Foundation::ViewObject::ViewObjectHandle a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_BDFE81FEA9BC8C74_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_06DB39AA74C933A6(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_06DB39AA74C933A6_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_956C7A6E2D0F82A1(::System::UInt32 a1, ::System::UInt32 a2, ::Foundation::ViewObject::ViewObjectHandle& a3)
	{
		return ((::MoleMole::EntityHandle(*)(::System::UInt32, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_956C7A6E2D0F82A1_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_7642E9CE17CC35E4()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_7642E9CE17CC35E4_OFFSET))();
	}

	static ::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::Class_1_204C453CC79AE4E0* Method_1_5CAFC7F339044F14(::System::Int32 a1, ::System::String* a2)
	{
		return ((::Class_1_204C453CC79AE4E0*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_5CAFC7F339044F14_OFFSET))(a1, a2);
	}

	static ::MoleMole::EntityHandle Method_1_A8B30F4FB05440AA(::System::String* a1, ::Foundation::ViewObject::ViewObjectHandle& a2)
	{
		return ((::MoleMole::EntityHandle(*)(::System::String*, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_A8B30F4FB05440AA_OFFSET))(a1, a2);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_FD947098326DD009(::Foundation::ViewObject::GroupMemberIdentifier a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_FD947098326DD009_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C4DEAEE83B3E8BE5(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_C4DEAEE83B3E8BE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0651AA5046861BAB(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Class_1_204C453CC79AE4E0*>*& a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_204C453CC79AE4E0*>*&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_0651AA5046861BAB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_161804062D142275(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_6657081C8A94CA44*>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::Class_1_6657081C8A94CA44*>*&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_161804062D142275_OFFSET))(a1, a2);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_FE79E9ECE1F0E214(::System::String* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_FE79E9ECE1F0E214_OFFSET))(a1);
	}

	static ::Class_1_204C453CC79AE4E0* Method_1_285A985B7FCC813A(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::Class_1_204C453CC79AE4E0*(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_285A985B7FCC813A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3D2905F5BCAF31A1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_3D2905F5BCAF31A1_OFFSET))(a1, a2);
	}

	static ::Class_2_208CC9941471731A_808* Method_1_D5013D1712D74E4B(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_2_208CC9941471731A_808*(*)(::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_D5013D1712D74E4B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F485487359D38A65(::System::UInt32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_F485487359D38A65_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C8B3C6A282BD803B(::System::Action* a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_C8B3C6A282BD803B_OFFSET))(a1, a2);
	}

	static ::MoleMole::EntityHandle Method_1_0F42923FC2842D5B(::Foundation::ViewObject::GroupMemberIdentifier a1, ::Foundation::ViewObject::ViewObjectHandle& a2)
	{
		return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_0F42923FC2842D5B_OFFSET))(a1, a2);
	}

	static ::Struct_2_6FCFA2277D52B2CC Method_1_553B41C5738ECC42(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_6FCFA2277D52B2CC(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_553B41C5738ECC42_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_204C453CC79AE4E0* Method_1_860CA5F408151004(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::Class_1_204C453CC79AE4E0*(*)(::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_860CA5F408151004_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_851E942665E34CC6(::Foundation::ViewObject::ViewObjectHandle a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_851E942665E34CC6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F2DE4246959DCEC8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_F2DE4246959DCEC8_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_208CC9941471731A_808* Method_1_1742CC6082AF8D7B(::UnityEngine::Vector3 a1)
	{
		return ((::Class_2_208CC9941471731A_808*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_1742CC6082AF8D7B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9DE98A18613B53AB(::System::Collections::Generic::List_1<::System::Int32>*& a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_9DE98A18613B53AB_OFFSET))(a1);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_AB2E871A86C94721(::MoleMole::Battle::Entity* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_AB2E871A86C94721_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_843BDD03AE28918C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_843BDD03AE28918C_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_58D409B3F1EEB758(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_58D409B3F1EEB758_OFFSET))(a1);
	}

	static ::System::Void Method_1_F7E7A60997450764(::Enum_3_BB0E1DD4C880324C a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Enum_3_BB0E1DD4C880324C, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_CLASS_1_E2C115A3940BD40A_METHOD_1_F7E7A60997450764_OFFSET))(a1, a2);
	}
};
