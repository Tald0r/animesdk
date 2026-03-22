#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B7070520540ABC52_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8D17290)
#define CLASS_1_B7070520540ABC52_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8D16CE0)
#define CLASS_1_B7070520540ABC52_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x8D16C60)
#define CLASS_1_B7070520540ABC52_METHOD_1_C68CB15A07D0E2EF_OFFSET UNITYSDK_OFFSET(0x8D172F0)
#define CLASS_1_B7070520540ABC52_METHOD_1_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x8D16BE0)
#define CLASS_1_B7070520540ABC52_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x8D16D60)
#define CLASS_1_B7070520540ABC52__CTOR_OFFSET UNITYSDK_OFFSET(0x8D17770)

inline static constexpr unsigned int Class_1_B7070520540ABC52_TypeDefinitionIndex = 53096;

class Class_1_B7070520540ABC52 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52_METHOD_1_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C68CB15A07D0E2EF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52_METHOD_1_C68CB15A07D0E2EF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_B7070520540ABC52_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
