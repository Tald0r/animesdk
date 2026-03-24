#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

class Class_0_16E4307DCC419505_178;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B33188F33A9E0142_METHOD_2_B213056103887067_OFFSET UNITYSDK_OFFSET(0x9772C00)
#define CLASS_2_B33188F33A9E0142__CTOR_OFFSET UNITYSDK_OFFSET(0x9772BD0)

inline static constexpr unsigned int Class_2_B33188F33A9E0142_TypeDefinitionIndex = 47684;

class Class_2_B33188F33A9E0142 : public ::System::EventArgs
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_B33188F33A9E0142__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_178* Method_2_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_178*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B33188F33A9E0142_METHOD_2_B213056103887067_OFFSET))(this);
	}
};
