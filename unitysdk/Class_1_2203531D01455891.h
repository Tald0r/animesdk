#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2203531D01455891_METHOD_1_05C0CF12CBCF1F6A_OFFSET UNITYSDK_OFFSET(0x6A66360)
#define CLASS_1_2203531D01455891_METHOD_1_28F0CEE614C13AED_OFFSET UNITYSDK_OFFSET(0x6A66620)
#define CLASS_1_2203531D01455891_METHOD_1_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x6A661B0)
#define CLASS_1_2203531D01455891_METHOD_1_9F7472255255C950_OFFSET UNITYSDK_OFFSET(0x6A660C0)
#define CLASS_1_2203531D01455891_METHOD_1_A94DD7FA433DEE48_OFFSET UNITYSDK_OFFSET(0x6A65EE0)
#define CLASS_1_2203531D01455891_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x6A660A0)
#define CLASS_1_2203531D01455891__CTOR_OFFSET UNITYSDK_OFFSET(0x6A65EC0)

inline static constexpr unsigned int Class_1_2203531D01455891_TypeDefinitionIndex = 37790;

class Class_1_2203531D01455891 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2203531D01455891__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A94DD7FA433DEE48()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2203531D01455891_METHOD_1_A94DD7FA433DEE48_OFFSET))(this);
	}

	::System::Void Method_1_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2203531D01455891_METHOD_1_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_1_05C0CF12CBCF1F6A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2203531D01455891_METHOD_1_05C0CF12CBCF1F6A_OFFSET))(this, a1);
	}

	::System::String* Method_1_28F0CEE614C13AED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2203531D01455891_METHOD_1_28F0CEE614C13AED_OFFSET))(this);
	}

	::System::String* Method_1_9F7472255255C950()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2203531D01455891_METHOD_1_9F7472255255C950_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2203531D01455891_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
