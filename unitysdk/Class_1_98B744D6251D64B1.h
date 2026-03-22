#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }

#define CLASS_1_98B744D6251D64B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AFC3E0)
#define CLASS_1_98B744D6251D64B1_METHOD_1_0F2B5D3D0E3661E8_OFFSET UNITYSDK_OFFSET(0x19AFC540)
#define CLASS_1_98B744D6251D64B1_METHOD_1_540036B1BE5579E4_OFFSET UNITYSDK_OFFSET(0x19AFC490)
#define CLASS_1_98B744D6251D64B1_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19AFBB70)
#define CLASS_1_98B744D6251D64B1_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x19AFC2C0)
#define CLASS_1_98B744D6251D64B1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19AFC4F0)
#define CLASS_1_98B744D6251D64B1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19AFBE30)
#define CLASS_1_98B744D6251D64B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AFC430)
#define CLASS_1_98B744D6251D64B1__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFC360)

inline static constexpr unsigned int Class_1_98B744D6251D64B1_TypeDefinitionIndex = 30908;

class Class_1_98B744D6251D64B1 : public ::System::Object
{
public:
	static ::System::Buffers::ArrayPool_1<::System::Byte>** StaticGet_Field_1_5()
	{
		return (::System::Buffers::ArrayPool_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98B744D6251D64B1_TypeDefinitionIndex)->GetStaticField(0x236A0);
	}
	::System::Action_1<::Il2CppArray<::System::Byte>*>* Field_1_3; // 0x10
	::Il2CppArray<::System::Byte>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x24
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Action_1<::Il2CppArray<::System::Byte>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Action_1<::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + CLASS_1_98B744D6251D64B1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98B744D6251D64B1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B744D6251D64B1_DISPOSE_OFFSET))(this);
	}

	static ::System::Buffers::ArrayPool_1<::System::Byte>* Method_1_540036B1BE5579E4()
	{
		return ((::System::Buffers::ArrayPool_1<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_98B744D6251D64B1_METHOD_1_540036B1BE5579E4_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B744D6251D64B1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B744D6251D64B1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B744D6251D64B1_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::Class_1_98B744D6251D64B1* Method_1_0F2B5D3D0E3661E8(::System::Int32 a1, ::System::Buffers::ArrayPool_1<::System::Byte>* a2)
	{
		return ((::Class_1_98B744D6251D64B1*(*)(::System::Int32, ::System::Buffers::ArrayPool_1<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_98B744D6251D64B1_METHOD_1_0F2B5D3D0E3661E8_OFFSET))(a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B744D6251D64B1_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
