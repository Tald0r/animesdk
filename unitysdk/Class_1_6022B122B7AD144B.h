#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6022B122B7AD144B_Struct_2_5F38CF9D8A198C37.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6022B122B7AD144B_METHOD_1_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x9EE1DE0)
#define CLASS_1_6022B122B7AD144B_METHOD_1_8A33DFD63EC231FE_OFFSET UNITYSDK_OFFSET(0x9EE1B50)
#define CLASS_1_6022B122B7AD144B_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x9EE1BD0)
#define CLASS_1_6022B122B7AD144B_METHOD_1_B15E763C95CF0A5B_OFFSET UNITYSDK_OFFSET(0x9EE1980)
#define CLASS_1_6022B122B7AD144B_METHOD_1_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x9EE1970)
#define CLASS_1_6022B122B7AD144B__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE1750)

inline static constexpr unsigned int Class_1_6022B122B7AD144B_TypeDefinitionIndex = 50981;

class Class_1_6022B122B7AD144B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Field_1_1; // 0x18
	::MoleMole::Battle::Entity* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6022B122B7AD144B_Struct_2_5F38CF9D8A198C37>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6022B122B7AD144B__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6022B122B7AD144B_METHOD_1_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Void Method_1_B15E763C95CF0A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6022B122B7AD144B_METHOD_1_B15E763C95CF0A5B_OFFSET))(this);
	}

	::System::Void Method_1_8A33DFD63EC231FE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6022B122B7AD144B_METHOD_1_8A33DFD63EC231FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6022B122B7AD144B_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_1_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_6022B122B7AD144B_METHOD_1_5E852A75624F0507_OFFSET))(this, a1);
	}
};
