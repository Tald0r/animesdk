#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_102E729200C964CB_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x17CC0100)
#define CLASS_1_102E729200C964CB_METHOD_1_8A33DFD63EC231FE_OFFSET UNITYSDK_OFFSET(0x17CC0370)
#define CLASS_1_102E729200C964CB_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x17CBFEA0)
#define CLASS_1_102E729200C964CB_METHOD_1_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x17CC03F0)
#define CLASS_1_102E729200C964CB__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBFE40)

inline static constexpr unsigned int Class_1_102E729200C964CB_TypeDefinitionIndex = 65149;

class Class_1_102E729200C964CB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102E729200C964CB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102E729200C964CB_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_102E729200C964CB_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_8A33DFD63EC231FE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_102E729200C964CB_METHOD_1_8A33DFD63EC231FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_102E729200C964CB_METHOD_1_B3A88D7849969A71_OFFSET))(this, a1);
	}
};
