#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ACAB1CC3423F0F23_METHOD_1_31D9827E00BB5262_OFFSET UNITYSDK_OFFSET(0x91EB4D0)
#define CLASS_1_ACAB1CC3423F0F23_METHOD_1_8E69D156D8B86563_OFFSET UNITYSDK_OFFSET(0x91EB460)
#define CLASS_1_ACAB1CC3423F0F23_METHOD_1_B37DEA1E5EB92594_OFFSET UNITYSDK_OFFSET(0x91EB340)
#define CLASS_1_ACAB1CC3423F0F23_METHOD_1_E2CF710F9C6FBFC4_OFFSET UNITYSDK_OFFSET(0x91EB1E0)
#define CLASS_1_ACAB1CC3423F0F23_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x91EB330)
#define CLASS_1_ACAB1CC3423F0F23__CTOR_OFFSET UNITYSDK_OFFSET(0x91EB150)

inline static constexpr unsigned int Class_1_ACAB1CC3423F0F23_TypeDefinitionIndex = 47587;

class Class_1_ACAB1CC3423F0F23 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_2; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x19
	::System::Boolean Field_1_3; // 0x1A

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ACAB1CC3423F0F23__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACAB1CC3423F0F23_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_B37DEA1E5EB92594(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ACAB1CC3423F0F23_METHOD_1_B37DEA1E5EB92594_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E2CF710F9C6FBFC4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACAB1CC3423F0F23_METHOD_1_E2CF710F9C6FBFC4_OFFSET))(this);
	}

	::System::Void Method_1_8E69D156D8B86563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACAB1CC3423F0F23_METHOD_1_8E69D156D8B86563_OFFSET))(this);
	}

	::System::Boolean Method_1_31D9827E00BB5262(::System::String* a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_ACAB1CC3423F0F23_METHOD_1_31D9827E00BB5262_OFFSET))(this, a1, a2);
	}
};
