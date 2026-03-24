#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_39E4021443B30A1D__CTOR_OFFSET UNITYSDK_OFFSET(0x7C0FFB0)

inline static constexpr unsigned int Class_1_39E4021443B30A1D_TypeDefinitionIndex = 43124;

class Class_1_39E4021443B30A1D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39E4021443B30A1D__CTOR_OFFSET))(this);
	}
};
