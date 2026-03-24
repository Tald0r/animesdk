#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_570D2F07D3EA0FBD;
class Class_1_AA2FAB933F36B228;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_570D2F07D3EA0FBD_CLASS_1_0B446E62593227EF_METHOD_1_88AB60EC06BE78FB_OFFSET UNITYSDK_OFFSET(0x6425D90)
#define CLASS_1_570D2F07D3EA0FBD_CLASS_1_0B446E62593227EF__CTOR_OFFSET UNITYSDK_OFFSET(0x6425D80)

inline static constexpr unsigned int Class_1_570D2F07D3EA0FBD_Class_1_0B446E62593227EF_TypeDefinitionIndex = 61399;

class Class_1_570D2F07D3EA0FBD_Class_1_0B446E62593227EF : public ::System::Object
{
public:
	::System::Action_1<::Class_1_AA2FAB933F36B228*>* Field_1_0; // 0x10
	::Class_1_570D2F07D3EA0FBD* Field_1_2; // 0x18
	::Class_1_AA2FAB933F36B228* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_570D2F07D3EA0FBD_CLASS_1_0B446E62593227EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_88AB60EC06BE78FB(::Class_1_AA2FAB933F36B228* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AA2FAB933F36B228*))((::PBYTE)hIl2Cpp + CLASS_1_570D2F07D3EA0FBD_CLASS_1_0B446E62593227EF_METHOD_1_88AB60EC06BE78FB_OFFSET))(this, a1);
	}
};
