#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B110B5AB4B019878;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define CLASS_1_7A4A5BED90AF2A47_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6BA6F20)
#define CLASS_1_7A4A5BED90AF2A47_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6BA6CC0)
#define CLASS_1_7A4A5BED90AF2A47_METHOD_1_126A583579A55C0E_OFFSET UNITYSDK_OFFSET(0x6BA7650)
#define CLASS_1_7A4A5BED90AF2A47_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x6BA7F50)
#define CLASS_1_7A4A5BED90AF2A47_METHOD_1_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0x6BA6F80)
#define CLASS_1_7A4A5BED90AF2A47_METHOD_1_4BAFA0CFC7F726F7_OFFSET UNITYSDK_OFFSET(0x6BA73C0)
#define CLASS_1_7A4A5BED90AF2A47_METHOD_1_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0x6BA6D40)
#define CLASS_1_7A4A5BED90AF2A47_METHOD_1_873070FC6F2E5F2E_OFFSET UNITYSDK_OFFSET(0x6BA7790)
#define CLASS_1_7A4A5BED90AF2A47_METHOD_1_955D03B72C9F414B_OFFSET UNITYSDK_OFFSET(0x6BA7E20)
#define CLASS_1_7A4A5BED90AF2A47_METHOD_1_DAFB0CB11B77534F_OFFSET UNITYSDK_OFFSET(0x6BA7CE0)
#define CLASS_1_7A4A5BED90AF2A47_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6BA7130)
#define CLASS_1_7A4A5BED90AF2A47__CTOR_OFFSET UNITYSDK_OFFSET(0x6BA73B0)

inline static constexpr unsigned int Class_1_7A4A5BED90AF2A47_TypeDefinitionIndex = 41174;

class Class_1_7A4A5BED90AF2A47 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_1; // 0x0
	::Il2CppArray<::Class_1_B110B5AB4B019878*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47_TOSTRING_OFFSET))(this);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_4BAFA0CFC7F726F7(::System::IO::Stream* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47_METHOD_1_4BAFA0CFC7F726F7_OFFSET))(a1);
	}

	static ::System::String* Method_1_126A583579A55C0E()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47_METHOD_1_126A583579A55C0E_OFFSET))();
	}

	static ::Class_1_7A4A5BED90AF2A47* Method_1_873070FC6F2E5F2E(::System::String* a1)
	{
		return ((::Class_1_7A4A5BED90AF2A47*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47_METHOD_1_873070FC6F2E5F2E_OFFSET))(a1);
	}

	::System::Void Method_1_DAFB0CB11B77534F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47_METHOD_1_DAFB0CB11B77534F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_955D03B72C9F414B()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47_METHOD_1_955D03B72C9F414B_OFFSET))(this);
	}

	::System::Boolean Method_1_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47_METHOD_1_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_7A4A5BED90AF2A47_METHOD_1_5253759692D6DAC1_OFFSET))(this, a1);
	}
};
