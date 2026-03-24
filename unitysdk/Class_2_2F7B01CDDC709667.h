#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2F7B01CDDC709667_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x7B08820)
#define CLASS_2_2F7B01CDDC709667_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x7B08710)
#define CLASS_2_2F7B01CDDC709667__CTOR_OFFSET UNITYSDK_OFFSET(0x7B087E0)

inline static constexpr unsigned int Class_2_2F7B01CDDC709667_TypeDefinitionIndex = 41925;

class Class_2_2F7B01CDDC709667 : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F7B01CDDC709667__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F7B01CDDC709667_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F7B01CDDC709667_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}
};
