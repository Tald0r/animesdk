#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_1A42310AB81707A3.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_CBD03186F289E3F6_METHOD_4_608993CB6D13EE32_OFFSET UNITYSDK_OFFSET(0x1B775490)
#define CLASS_4_CBD03186F289E3F6_METHOD_4_F9B4F48C77712C33_OFFSET UNITYSDK_OFFSET(0x1B775850)
#define CLASS_4_CBD03186F289E3F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1B775840)

inline static constexpr unsigned int Class_4_CBD03186F289E3F6_TypeDefinitionIndex = 83706;

class Class_4_CBD03186F289E3F6 : public ::Class_3_1A42310AB81707A3
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CBD03186F289E3F6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* Method_4_608993CB6D13EE32()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CBD03186F289E3F6_METHOD_4_608993CB6D13EE32_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* Method_4_F9B4F48C77712C33()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CBD03186F289E3F6_METHOD_4_F9B4F48C77712C33_OFFSET))(this);
	}
};
