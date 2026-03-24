#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0A2E20DCFD15C080.h"

namespace MoleMole { class RandomMonsterSelectParam; }
namespace MoleMole::Project::Config { class MonsterGroupTemplateExt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A67E1EDB732F2EA4_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x85489E0)
#define CLASS_3_A67E1EDB732F2EA4_METHOD_3_3DD6921FAE7E698B_OFFSET UNITYSDK_OFFSET(0x8547880)
#define CLASS_3_A67E1EDB732F2EA4_METHOD_3_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x8547DB0)
#define CLASS_3_A67E1EDB732F2EA4_METHOD_3_51E3668835E4C00A_OFFSET UNITYSDK_OFFSET(0x8547010)
#define CLASS_3_A67E1EDB732F2EA4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8548980)
#define CLASS_3_A67E1EDB732F2EA4__CTOR_OFFSET UNITYSDK_OFFSET(0x8546C30)

inline static constexpr unsigned int Class_3_A67E1EDB732F2EA4_TypeDefinitionIndex = 75871;

class Class_3_A67E1EDB732F2EA4 : public ::Class_2_0A2E20DCFD15C080<::Class_3_A67E1EDB732F2EA4*>
{
public:
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_1; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_51E3668835E4C00A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4_METHOD_3_51E3668835E4C00A_OFFSET))(this);
	}

	::System::Void Method_3_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4_METHOD_3_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_3DD6921FAE7E698B(::MoleMole::Project::Config::MonsterGroupTemplateExt* a1, ::MoleMole::RandomMonsterSelectParam* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Project::Config::MonsterGroupTemplateExt*, ::MoleMole::RandomMonsterSelectParam*))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4_METHOD_3_3DD6921FAE7E698B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}
};
