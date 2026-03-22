#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_143;
class Class_1_AC9A71375E037558;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_AC9A71375E037558_CLASS_1_D50EB43D6FBEBE7A_METHOD_1_36314B65B0A19C1B_OFFSET UNITYSDK_OFFSET(0x90B0720)
#define CLASS_1_AC9A71375E037558_CLASS_1_D50EB43D6FBEBE7A_METHOD_1_509B1C3C859EAFB5_OFFSET UNITYSDK_OFFSET(0x90B08E0)
#define CLASS_1_AC9A71375E037558_CLASS_1_D50EB43D6FBEBE7A__CTOR_OFFSET UNITYSDK_OFFSET(0x90B0710)

inline static constexpr unsigned int Class_1_AC9A71375E037558_Class_1_D50EB43D6FBEBE7A_TypeDefinitionIndex = 56645;

class Class_1_AC9A71375E037558_Class_1_D50EB43D6FBEBE7A : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_0; // 0x10
	::Class_1_AC9A71375E037558* Field_1_1; // 0x18
	::System::Action_1<::System::Exception*>* Field_1_3; // 0x20
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_D50EB43D6FBEBE7A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_36314B65B0A19C1B(::Class_0_16E4307DCC419505_143* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_143*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_D50EB43D6FBEBE7A_METHOD_1_36314B65B0A19C1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_509B1C3C859EAFB5(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_D50EB43D6FBEBE7A_METHOD_1_509B1C3C859EAFB5_OFFSET))(this, a1);
	}
};
