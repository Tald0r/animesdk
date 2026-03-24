#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_768;
class Class_2_25A326E4E7F9FCFE;
class Class_2_8DF79805C340EF4E;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_73AB0398DC776E2A_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x646C400)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_191AE49B551555ED_OFFSET UNITYSDK_OFFSET(0x646E530)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_1CA1012710A2BCD1_OFFSET UNITYSDK_OFFSET(0x646E7C0)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_448671A72F28EDCF_OFFSET UNITYSDK_OFFSET(0x646D3E0)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_4BFA336F3125D9F4_OFFSET UNITYSDK_OFFSET(0x646CC80)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_5CF38E61A282CF88_OFFSET UNITYSDK_OFFSET(0x646D240)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_7BB5F5F4EFB4FA9A_OFFSET UNITYSDK_OFFSET(0x646CE20)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_88F9DD86CB8DDD74_OFFSET UNITYSDK_OFFSET(0x646CB00)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x646CEE0)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_A85D5ACCC4FE9A22_OFFSET UNITYSDK_OFFSET(0x646D4D0)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x646EA90)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_BCC08D7156BAF71D_OFFSET UNITYSDK_OFFSET(0x646CF50)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x646CAA0)
#define CLASS_3_73AB0398DC776E2A_METHOD_3_EFD4DC343B4D7EFD_OFFSET UNITYSDK_OFFSET(0x646DBE0)
#define CLASS_3_73AB0398DC776E2A_UPDATE_OFFSET UNITYSDK_OFFSET(0x646C870)
#define CLASS_3_73AB0398DC776E2A__CCTOR_OFFSET UNITYSDK_OFFSET(0x646CA10)
#define CLASS_3_73AB0398DC776E2A__CTOR_OFFSET UNITYSDK_OFFSET(0x646C9F0)

inline static constexpr unsigned int Class_3_73AB0398DC776E2A_TypeDefinitionIndex = 45753;

class Class_3_73AB0398DC776E2A : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_73AB0398DC776E2A_TypeDefinitionIndex)->GetStaticField(0x3F9F0);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_88F9DD86CB8DDD74(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_88F9DD86CB8DDD74_OFFSET))(a1, a2);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4BFA336F3125D9F4(::Class_2_25A326E4E7F9FCFE* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_25A326E4E7F9FCFE*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_4BFA336F3125D9F4_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BCC08D7156BAF71D(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_BCC08D7156BAF71D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5CF38E61A282CF88(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_5CF38E61A282CF88_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_448671A72F28EDCF(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_448671A72F28EDCF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EFD4DC343B4D7EFD(::MoleMole::Battle::Entity* a1, ::Class_2_208CC9941471731A_768* a2, ::System::String* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_208CC9941471731A_768*, ::System::String*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_EFD4DC343B4D7EFD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_7BB5F5F4EFB4FA9A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_7BB5F5F4EFB4FA9A_OFFSET))(a1);
	}

	::System::Void Method_3_191AE49B551555ED(::System::String* a1, ::System::Int32 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_191AE49B551555ED_OFFSET))(this, a1, a2, a3);
	}

	static ::System::String* Method_3_1CA1012710A2BCD1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_1CA1012710A2BCD1_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_A85D5ACCC4FE9A22(::Class_2_8DF79805C340EF4E* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8DF79805C340EF4E*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_METHOD_3_A85D5ACCC4FE9A22_OFFSET))(this, a1, a2);
	}
};
