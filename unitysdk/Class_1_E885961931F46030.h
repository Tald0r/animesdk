#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A45E918E5024074.h"
#include "unitysdk/Enum_3_5BC4A642501E33BD.h"
#include "unitysdk/System/Object.h"

class Class_1_2BEAA93324417DF4;
class Class_1_2EF69FD7F867E7F6;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E885961931F46030_METHOD_1_74B363C221936ED7_OFFSET UNITYSDK_OFFSET(0xAEDD7B0)
#define CLASS_1_E885961931F46030_METHOD_1_B4B14845111E88EF_OFFSET UNITYSDK_OFFSET(0xAEDDA90)
#define CLASS_1_E885961931F46030_METHOD_1_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0xAEDD6C0)
#define CLASS_1_E885961931F46030_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0xAEDD730)
#define CLASS_1_E885961931F46030_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xAEDD650)
#define CLASS_1_E885961931F46030__CTOR_OFFSET UNITYSDK_OFFSET(0xAEDD7A0)

inline static constexpr unsigned int Class_1_E885961931F46030_TypeDefinitionIndex = 79888;

class Class_1_E885961931F46030 : public ::System::Object
{
public:
	::Class_1_2BEAA93324417DF4* Field_1_0; // 0x10
	::Enum_3_5BC4A642501E33BD Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6FA84ECDEF620CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030_METHOD_1_E6FA84ECDEF620CE_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9_1(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030_METHOD_1_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_E885961931F46030*>* Method_1_74B363C221936ED7()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E885961931F46030*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030_METHOD_1_74B363C221936ED7_OFFSET))();
	}

	::System::Void Method_1_B4B14845111E88EF(::Enum_3_3A45E918E5024074 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3A45E918E5024074, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_1_E885961931F46030_METHOD_1_B4B14845111E88EF_OFFSET))(this, a1, a2);
	}
};
