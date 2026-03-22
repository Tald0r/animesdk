#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventHandler; }

#define CLASS_1_016188D2D8968DDB_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1AF04A10)
#define CLASS_1_016188D2D8968DDB_METHOD_1_8CCB07639A05D95D_OFFSET UNITYSDK_OFFSET(0x1AF04CA0)
#define CLASS_1_016188D2D8968DDB_METHOD_1_B233FEFAAA05D880_1_OFFSET UNITYSDK_OFFSET(0x1AF049B0)
#define CLASS_1_016188D2D8968DDB_METHOD_1_B233FEFAAA05D880_2_OFFSET UNITYSDK_OFFSET(0x1AF04BE0)
#define CLASS_1_016188D2D8968DDB_METHOD_1_B233FEFAAA05D880_3_OFFSET UNITYSDK_OFFSET(0x1AF04C40)
#define CLASS_1_016188D2D8968DDB_METHOD_1_B233FEFAAA05D880_OFFSET UNITYSDK_OFFSET(0x1AF04950)
#define CLASS_1_016188D2D8968DDB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AF04BD0)
#define CLASS_1_016188D2D8968DDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF04D30)

inline static constexpr unsigned int Class_1_016188D2D8968DDB_TypeDefinitionIndex = 24332;

class Class_1_016188D2D8968DDB : public ::System::Object
{
public:
	::System::EventHandler* Field_1_2; // 0x10
	::System::EventHandler* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016188D2D8968DDB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B233FEFAAA05D880(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_016188D2D8968DDB_METHOD_1_B233FEFAAA05D880_OFFSET))(this, a1);
	}

	::System::Void Method_1_B233FEFAAA05D880_1(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_016188D2D8968DDB_METHOD_1_B233FEFAAA05D880_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016188D2D8968DDB_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016188D2D8968DDB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_B233FEFAAA05D880_2(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_016188D2D8968DDB_METHOD_1_B233FEFAAA05D880_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B233FEFAAA05D880_3(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_016188D2D8968DDB_METHOD_1_B233FEFAAA05D880_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CCB07639A05D95D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016188D2D8968DDB_METHOD_1_8CCB07639A05D95D_OFFSET))(this);
	}
};
