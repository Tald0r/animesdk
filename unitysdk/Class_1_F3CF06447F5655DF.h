#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/GameplayEffectModifier.h"
#include "unitysdk/System/Object.h"

class Class_1_88E4CECE0D39F697;
class Class_1_F61BB49F70F7407A;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F3CF06447F5655DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7B95D00)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x7B96F60)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_500000118F9D82D6_OFFSET UNITYSDK_OFFSET(0x7B97170)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_5A84D85DF58CA6B5_OFFSET UNITYSDK_OFFSET(0x7B96BA0)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_63959425F6DCE62A_OFFSET UNITYSDK_OFFSET(0x7B972B0)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_716F9CA40F2688B9_OFFSET UNITYSDK_OFFSET(0x7B97D80)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_96A5E0109D582A9D_OFFSET UNITYSDK_OFFSET(0x7B95DC0)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x7B97330)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x7B95F50)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_DDF85170C95865C3_OFFSET UNITYSDK_OFFSET(0x7B96070)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x7B97C60)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_E32BCC2C6A959814_OFFSET UNITYSDK_OFFSET(0x7B96FE0)
#define CLASS_1_F3CF06447F5655DF_METHOD_1_FD40F9D89533F185_OFFSET UNITYSDK_OFFSET(0x7B961E0)
#define CLASS_1_F3CF06447F5655DF__CTOR_OFFSET UNITYSDK_OFFSET(0x7B95C80)

inline static constexpr unsigned int Class_1_F3CF06447F5655DF_TypeDefinitionIndex = 68377;

class Class_1_F3CF06447F5655DF : public ::System::Object
{
public:
	::Class_1_F61BB49F70F7407A* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Tuple_2<::Class_1_88E4CECE0D39F697*, ::MoleMole::Battle::GameplayEffectModifier>*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_96A5E0109D582A9D(::Class_1_88E4CECE0D39F697* a1, ::MoleMole::Battle::GameplayEffectModifier a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_88E4CECE0D39F697*, ::MoleMole::Battle::GameplayEffectModifier))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_96A5E0109D582A9D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_1_DDF85170C95865C3(::Class_1_88E4CECE0D39F697* a1, ::MoleMole::Battle::GameplayEffectModifier a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_88E4CECE0D39F697*, ::MoleMole::Battle::GameplayEffectModifier))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_DDF85170C95865C3_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FD40F9D89533F185()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_FD40F9D89533F185_OFFSET))(this);
	}

	::System::Void Method_1_5A84D85DF58CA6B5(::Class_1_F61BB49F70F7407A* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_5A84D85DF58CA6B5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E32BCC2C6A959814()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_E32BCC2C6A959814_OFFSET))(this);
	}

	static ::Class_1_F3CF06447F5655DF* Method_1_500000118F9D82D6(::Class_1_F61BB49F70F7407A* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::Class_1_F3CF06447F5655DF*(*)(::Class_1_F61BB49F70F7407A*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_500000118F9D82D6_OFFSET))(a1, a2);
	}

	::Class_1_F3CF06447F5655DF* Method_1_63959425F6DCE62A(::Class_1_F61BB49F70F7407A* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::Class_1_F3CF06447F5655DF*(*)(::PVOID, ::Class_1_F61BB49F70F7407A*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_63959425F6DCE62A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_1_716F9CA40F2688B9(::Class_1_F61BB49F70F7407A* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3CF06447F5655DF_METHOD_1_716F9CA40F2688B9_OFFSET))(this, a1, a2, a3);
	}
};
