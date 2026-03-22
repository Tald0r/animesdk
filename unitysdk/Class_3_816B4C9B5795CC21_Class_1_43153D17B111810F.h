#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_816B4C9B5795CC21_CLASS_1_43153D17B111810F_METHOD_1_AB640961F167C1D2_OFFSET UNITYSDK_OFFSET(0xA0E5F90)
#define CLASS_3_816B4C9B5795CC21_CLASS_1_43153D17B111810F__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E5F80)

inline static constexpr unsigned int Class_3_816B4C9B5795CC21_Class_1_43153D17B111810F_TypeDefinitionIndex = 39190;

class Class_3_816B4C9B5795CC21_Class_1_43153D17B111810F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816B4C9B5795CC21_CLASS_1_43153D17B111810F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_AB640961F167C1D2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_816B4C9B5795CC21_CLASS_1_43153D17B111810F_METHOD_1_AB640961F167C1D2_OFFSET))(this, a1);
	}
};
