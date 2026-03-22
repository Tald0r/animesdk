#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_31;
class Class_0_16E4307DCC419505_44;

#define CLASS_1_FD893FD36F6A3A6D_METHOD_1_66F6D05493E82CD1_OFFSET UNITYSDK_OFFSET(0x1AF04D50)
#define CLASS_1_FD893FD36F6A3A6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF04D40)

inline static constexpr unsigned int Class_1_FD893FD36F6A3A6D_TypeDefinitionIndex = 24250;

class Class_1_FD893FD36F6A3A6D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_44* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_31* Field_1_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_31*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_44* Method_1_66F6D05493E82CD1()
	{
		return ((::Class_0_16E4307DCC419505_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_METHOD_1_66F6D05493E82CD1_OFFSET))(this);
	}
};
