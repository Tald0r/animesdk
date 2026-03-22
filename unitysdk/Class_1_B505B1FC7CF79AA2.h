#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9E7B88C501101AD5.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B505B1FC7CF79AA2_METHOD_1_1BE2B6D73BF7CF96_OFFSET UNITYSDK_OFFSET(0xA237140)
#define CLASS_1_B505B1FC7CF79AA2_METHOD_1_4CCB11848FC09151_OFFSET UNITYSDK_OFFSET(0xA238B00)
#define CLASS_1_B505B1FC7CF79AA2_METHOD_1_A12F5FBC26D4F36B_OFFSET UNITYSDK_OFFSET(0xA237CF0)
#define CLASS_1_B505B1FC7CF79AA2__CTOR_OFFSET UNITYSDK_OFFSET(0xA2370F0)

inline static constexpr unsigned int Class_1_B505B1FC7CF79AA2_TypeDefinitionIndex = 71650;

class Class_1_B505B1FC7CF79AA2 : public ::System::Object
{
public:
	::Struct_2_9E7B88C501101AD5 Field_1_12; // 0x10
	::System::String* Field_1_6; // 0x48
	::System::String* Field_1_1; // 0x50
	::System::String* Field_1_10; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* Field_1_11; // 0x60
	::System::String* Field_1_3; // 0x68
	::System::String* Field_1_0; // 0x70
	::System::String* Field_1_2; // 0x78
	::System::String* Field_1_5; // 0x80
	::System::String* Field_1_7; // 0x88
	::System::Boolean Field_1_4; // 0x90
	::System::Boolean Field_1_9; // 0x91
	::System::Boolean Field_1_8; // 0x92

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B505B1FC7CF79AA2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1BE2B6D73BF7CF96(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_B505B1FC7CF79AA2_METHOD_1_1BE2B6D73BF7CF96_OFFSET))(this, a1);
	}

	::System::Void Method_1_A12F5FBC26D4F36B(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_B505B1FC7CF79AA2_METHOD_1_A12F5FBC26D4F36B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4CCB11848FC09151()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B505B1FC7CF79AA2_METHOD_1_4CCB11848FC09151_OFFSET))(this);
	}
};
