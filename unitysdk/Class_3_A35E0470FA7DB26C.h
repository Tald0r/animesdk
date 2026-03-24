#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1AA21A29C8545FBA.h"
#include "unitysdk/Struct_2_3B65F9FEB7EA13B1.h"

class Class_1_16B3E50F833C8CC8;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A35E0470FA7DB26C_METHOD_3_5228C73C05FCE8DD_OFFSET UNITYSDK_OFFSET(0xA159E30)
#define CLASS_3_A35E0470FA7DB26C_METHOD_3_D619322FFD84CE0C_OFFSET UNITYSDK_OFFSET(0xA159D40)
#define CLASS_3_A35E0470FA7DB26C__CTOR_OFFSET UNITYSDK_OFFSET(0xA159F90)

inline static constexpr unsigned int Class_3_A35E0470FA7DB26C_TypeDefinitionIndex = 56080;

class Class_3_A35E0470FA7DB26C : public ::Class_2_1AA21A29C8545FBA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A35E0470FA7DB26C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D619322FFD84CE0C(::System::Collections::Generic::List_1<::Struct_2_3B65F9FEB7EA13B1>* a1, ::Class_1_16B3E50F833C8CC8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_3B65F9FEB7EA13B1>*, ::Class_1_16B3E50F833C8CC8*))((::PBYTE)hIl2Cpp + CLASS_3_A35E0470FA7DB26C_METHOD_3_D619322FFD84CE0C_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIControllerContextBase* Method_3_5228C73C05FCE8DD(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_3B65F9FEB7EA13B1>* a2)
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_3B65F9FEB7EA13B1>*))((::PBYTE)hIl2Cpp + CLASS_3_A35E0470FA7DB26C_METHOD_3_5228C73C05FCE8DD_OFFSET))(this, a1, a2);
	}
};
