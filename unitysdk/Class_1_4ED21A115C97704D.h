#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_FD52F69DDE69243C;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_1_4ED21A115C97704D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x96794C0)
#define CLASS_1_4ED21A115C97704D_FROMFLX_OFFSET UNITYSDK_OFFSET(0x96793E0)
#define CLASS_1_4ED21A115C97704D_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x96793A0)
#define CLASS_1_4ED21A115C97704D_METHOD_1_721CBB8BCE2363FA_OFFSET UNITYSDK_OFFSET(0x96799C0)
#define CLASS_1_4ED21A115C97704D_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x96793B0)
#define CLASS_1_4ED21A115C97704D_METHOD_1_B9D2A18E8B93570D_OFFSET UNITYSDK_OFFSET(0x9679870)
#define CLASS_1_4ED21A115C97704D_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x96793D0)
#define CLASS_1_4ED21A115C97704D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x9679390)
#define CLASS_1_4ED21A115C97704D_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x96793C0)
#define CLASS_1_4ED21A115C97704D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9679380)
#define CLASS_1_4ED21A115C97704D__CCTOR_OFFSET UNITYSDK_OFFSET(0x9679770)
#define CLASS_1_4ED21A115C97704D__CTOR_OFFSET UNITYSDK_OFFSET(0x9679760)

inline static constexpr unsigned int Class_1_4ED21A115C97704D_TypeDefinitionIndex = 75122;

class Class_1_4ED21A115C97704D : public ::System::Object
{
public:
	static ::Class_2_FD52F69DDE69243C** StaticGet_Field_1_3()
	{
		return (::Class_2_FD52F69DDE69243C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ED21A115C97704D_TypeDefinitionIndex)->GetStaticField(0x35040);
	}
	static ::Class_2_FD52F69DDE69243C** StaticGet_Field_1_4()
	{
		return (::Class_2_FD52F69DDE69243C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ED21A115C97704D_TypeDefinitionIndex)->GetStaticField(0x35048);
	}
	::System::String* Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_1_B9D2A18E8B93570D()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D_METHOD_1_B9D2A18E8B93570D_OFFSET))(this);
	}

	::System::Boolean Method_1_721CBB8BCE2363FA(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_4ED21A115C97704D_METHOD_1_721CBB8BCE2363FA_OFFSET))(this, a1);
	}
};
