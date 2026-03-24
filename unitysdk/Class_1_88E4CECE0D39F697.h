#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/GameplayEffectModifier.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_D366ED82D8A1F916;
class Class_3_247B97EFF95C09A1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_88E4CECE0D39F697_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9476C00)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_09CCD73C6DC37035_OFFSET UNITYSDK_OFFSET(0x9477490)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_143DFFC09F3128EE_OFFSET UNITYSDK_OFFSET(0x9476F80)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_22087C5CCE24FEE2_1_OFFSET UNITYSDK_OFFSET(0x94775F0)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_22087C5CCE24FEE2_OFFSET UNITYSDK_OFFSET(0x9477370)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x9476F70)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_2C3C8488EDCCA55A_OFFSET UNITYSDK_OFFSET(0x9477830)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x9476ED0)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9476E60)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_5E852A75624F0507_1_OFFSET UNITYSDK_OFFSET(0x94775D0)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x9476E50)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_63468D32EF9DA323_OFFSET UNITYSDK_OFFSET(0x9477130)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_67013AED7A137AC2_OFFSET UNITYSDK_OFFSET(0x9477560)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_6D3A4546382BD733_1_OFFSET UNITYSDK_OFFSET(0x9477730)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_6D3A4546382BD733_OFFSET UNITYSDK_OFFSET(0x9476F50)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x94771E0)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x9477720)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x9477740)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_B9D8FD15D18938A0_1_OFFSET UNITYSDK_OFFSET(0x94775E0)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x9476F60)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x9477710)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_C8C3AFE9690BE60A_OFFSET UNITYSDK_OFFSET(0x9476E40)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_CB05E31BC18294EA_OFFSET UNITYSDK_OFFSET(0x9477160)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9476F40)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_FD24DDB099A88700_1_OFFSET UNITYSDK_OFFSET(0x9477150)
#define CLASS_1_88E4CECE0D39F697_METHOD_1_FD24DDB099A88700_OFFSET UNITYSDK_OFFSET(0x9477140)
#define CLASS_1_88E4CECE0D39F697__CTOR_OFFSET UNITYSDK_OFFSET(0x9476BF0)

inline static constexpr unsigned int Class_1_88E4CECE0D39F697_TypeDefinitionIndex = 47720;

class Class_1_88E4CECE0D39F697 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_5; // 0x10
	::Class_1_D366ED82D8A1F916* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_6; // 0x28
	::MoleMole::Battle::Entity* Field_1_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_0; // 0x38
	::MoleMole::Battle::Entity* Field_1_1; // 0x40
	::System::Boolean Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>* Method_1_C8C3AFE9690BE60A()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_C8C3AFE9690BE60A_OFFSET))(this);
	}

	::System::Void Method_1_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_1_6D3A4546382BD733()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_6D3A4546382BD733_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_B9D8FD15D18938A0_OFFSET))(this);
	}

	::Class_1_D366ED82D8A1F916* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D366ED82D8A1F916*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_88E4CECE0D39F697* Method_1_143DFFC09F3128EE(::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>* a1)
	{
		return ((::Class_1_88E4CECE0D39F697*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>*))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_143DFFC09F3128EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_63468D32EF9DA323(::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>*))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_63468D32EF9DA323_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD24DDB099A88700(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_FD24DDB099A88700_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD24DDB099A88700_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_FD24DDB099A88700_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB05E31BC18294EA(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_CB05E31BC18294EA_OFFSET))(this, a1, a2);
	}

	::Class_3_247B97EFF95C09A1* Method_1_22087C5CCE24FEE2()
	{
		return ((::Class_3_247B97EFF95C09A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_22087C5CCE24FEE2_OFFSET))(this);
	}

	::System::Void Method_1_09CCD73C6DC37035(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_09CCD73C6DC37035_OFFSET))(this, a1, a2);
	}

	::Class_1_88E4CECE0D39F697* Method_1_67013AED7A137AC2(::Class_1_D366ED82D8A1F916* a1)
	{
		return ((::Class_1_88E4CECE0D39F697*(*)(::PVOID, ::Class_1_D366ED82D8A1F916*))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_67013AED7A137AC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E852A75624F0507_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_5E852A75624F0507_1_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_1_B9D8FD15D18938A0_1()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_B9D8FD15D18938A0_1_OFFSET))(this);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::Class_3_247B97EFF95C09A1* Method_1_22087C5CCE24FEE2_1()
	{
		return ((::Class_3_247B97EFF95C09A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_22087C5CCE24FEE2_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D366ED82D8A1F916* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D366ED82D8A1F916*))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_1_6D3A4546382BD733_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_6D3A4546382BD733_1_OFFSET))(this);
	}

	static ::Class_1_88E4CECE0D39F697* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_88E4CECE0D39F697*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_B64C60973842FE45_OFFSET))();
	}

	::System::Nullable_1<::System::Single> Method_1_2C3C8488EDCCA55A(::System::String* a1)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88E4CECE0D39F697_METHOD_1_2C3C8488EDCCA55A_OFFSET))(this, a1);
	}
};
