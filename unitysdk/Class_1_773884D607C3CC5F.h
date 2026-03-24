#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_16B3E50F833C8CC8;
class Class_1_773884D607C3CC5F_Class_1_1FDF96BD2E7995CD;

#define CLASS_1_773884D607C3CC5F_METHOD_1_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0xCBA77F0)
#define CLASS_1_773884D607C3CC5F_METHOD_1_A408FF3DFC57B794_OFFSET UNITYSDK_OFFSET(0xCBA7B30)
#define CLASS_1_773884D607C3CC5F_METHOD_1_B0D82879D3D7B795_OFFSET UNITYSDK_OFFSET(0xCBA78B0)
#define CLASS_1_773884D607C3CC5F__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBA7720)

inline static constexpr unsigned int Class_1_773884D607C3CC5F_TypeDefinitionIndex = 68904;

class Class_1_773884D607C3CC5F : public ::System::Object
{
public:
	static ::Class_1_773884D607C3CC5F_Class_1_1FDF96BD2E7995CD** StaticGet_Field_1_0()
	{
		return (::Class_1_773884D607C3CC5F_Class_1_1FDF96BD2E7995CD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_773884D607C3CC5F_TypeDefinitionIndex)->GetStaticField(0x32D60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_773884D607C3CC5F__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_773884D607C3CC5F_METHOD_1_08DCF72FBE01FF99_OFFSET))();
	}

	static ::System::Void Method_1_B0D82879D3D7B795(::System::Int32 a1, ::Class_1_16B3E50F833C8CC8* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_1_16B3E50F833C8CC8*))((::PBYTE)hIl2Cpp + CLASS_1_773884D607C3CC5F_METHOD_1_B0D82879D3D7B795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A408FF3DFC57B794(::System::Int32 a1, ::Class_1_16B3E50F833C8CC8* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_1_16B3E50F833C8CC8*))((::PBYTE)hIl2Cpp + CLASS_1_773884D607C3CC5F_METHOD_1_A408FF3DFC57B794_OFFSET))(a1, a2);
	}
};
