#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/System/Object.h"

class Class_1_204C453CC79AE4E0;
class Class_3_E9171F088E0B4E9A;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_3_E9171F088E0B4E9A_CLASS_1_0A5240F83DC06B2C_METHOD_1_51582343C866D3E1_OFFSET UNITYSDK_OFFSET(0x743C780)
#define CLASS_3_E9171F088E0B4E9A_CLASS_1_0A5240F83DC06B2C__CTOR_OFFSET UNITYSDK_OFFSET(0x743C770)

inline static constexpr unsigned int Class_3_E9171F088E0B4E9A_Class_1_0A5240F83DC06B2C_TypeDefinitionIndex = 37395;

class Class_3_E9171F088E0B4E9A_Class_1_0A5240F83DC06B2C : public ::System::Object
{
public:
	::Class_3_E9171F088E0B4E9A* Field_1_0; // 0x10
	::Class_1_204C453CC79AE4E0* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A_CLASS_1_0A5240F83DC06B2C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_51582343C866D3E1(::Struct_2_FE667B282E242C72 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_FE667B282E242C72))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A_CLASS_1_0A5240F83DC06B2C_METHOD_1_51582343C866D3E1_OFFSET))(this, a1);
	}
};
