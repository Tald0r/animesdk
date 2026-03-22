#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_296;
class Class_0_16E4307DCC419505_624;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_7BAAE538CA427A84_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xD58A820)
#define CLASS_1_7BAAE538CA427A84_METHOD_1_CC5B0BB085FF5C11_OFFSET UNITYSDK_OFFSET(0xD58A730)
#define CLASS_1_7BAAE538CA427A84__CTOR_OFFSET UNITYSDK_OFFSET(0xD58A7E0)

inline static constexpr unsigned int Class_1_7BAAE538CA427A84_TypeDefinitionIndex = 63997;

class Class_1_7BAAE538CA427A84 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_624* Field_1_0; // 0x10
	::System::Action_1<::Class_0_16E4307DCC419505_296*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BAAE538CA427A84__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CC5B0BB085FF5C11(::System::Action_1<::Class_0_16E4307DCC419505_296*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_296*>*))((::PBYTE)hIl2Cpp + CLASS_1_7BAAE538CA427A84_METHOD_1_CC5B0BB085FF5C11_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_624* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_624*))((::PBYTE)hIl2Cpp + CLASS_1_7BAAE538CA427A84_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}
};
