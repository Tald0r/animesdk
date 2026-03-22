#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_80AC63F59C5E376B;
class Class_2_A598F7625AE8DE78_Class_1_DBE45A2B69DC33BB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_80AC63F59C5E376B_CLASS_1_FD420CFDE1F5E37E_METHOD_1_9A5E606F81CD7EDA_OFFSET UNITYSDK_OFFSET(0x6A4FC00)
#define CLASS_2_80AC63F59C5E376B_CLASS_1_FD420CFDE1F5E37E_METHOD_1_C864B78158C8B9BB_OFFSET UNITYSDK_OFFSET(0x6A50310)
#define CLASS_2_80AC63F59C5E376B_CLASS_1_FD420CFDE1F5E37E__CTOR_OFFSET UNITYSDK_OFFSET(0x6A4FBF0)

inline static constexpr unsigned int Class_2_80AC63F59C5E376B_Class_1_FD420CFDE1F5E37E_TypeDefinitionIndex = 51469;

class Class_2_80AC63F59C5E376B_Class_1_FD420CFDE1F5E37E : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::System::String* Field_1_0; // 0x18
	::Class_2_80AC63F59C5E376B* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80AC63F59C5E376B_CLASS_1_FD420CFDE1F5E37E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A5E606F81CD7EDA(::Class_2_A598F7625AE8DE78_Class_1_DBE45A2B69DC33BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A598F7625AE8DE78_Class_1_DBE45A2B69DC33BB*))((::PBYTE)hIl2Cpp + CLASS_2_80AC63F59C5E376B_CLASS_1_FD420CFDE1F5E37E_METHOD_1_9A5E606F81CD7EDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C864B78158C8B9BB(::Class_2_A598F7625AE8DE78_Class_1_DBE45A2B69DC33BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A598F7625AE8DE78_Class_1_DBE45A2B69DC33BB*))((::PBYTE)hIl2Cpp + CLASS_2_80AC63F59C5E376B_CLASS_1_FD420CFDE1F5E37E_METHOD_1_C864B78158C8B9BB_OFFSET))(this, a1);
	}
};
