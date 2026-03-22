#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SIRENIX_SERIALIZATION_BINARYDATAWRITER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2006F0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A200720)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1A200730)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER___C___CCTOR_B__68_1_OFFSET UNITYSDK_OFFSET(0x1A200770)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER___C___CCTOR_B__68_2_OFFSET UNITYSDK_OFFSET(0x1A2007B0)
#define SIRENIX_SERIALIZATION_BINARYDATAWRITER___C___CCTOR_B__68_3_OFFSET UNITYSDK_OFFSET(0x1A2007F0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BinaryDataWriter___c_TypeDefinitionIndex = 7283;

	class BinaryDataWriter___c : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::BinaryDataWriter___c** StaticGet___9()
		{
			return (::Sirenix::Serialization::BinaryDataWriter___c**)Il2CppClass::FromTypeDefinitionIndex(BinaryDataWriter___c_TypeDefinitionIndex)->GetStaticField(0x63E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__68_0(::Il2CppArray<::System::Byte>* b, ::System::Int32 i, ::System::Char v)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER___C___CCTOR_B__68_0_OFFSET))(this, b, i, v);
		}

		::System::Void __cctor_b__68_1(::Il2CppArray<::System::Byte>* b, ::System::Int32 i, ::System::Byte v)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER___C___CCTOR_B__68_1_OFFSET))(this, b, i, v);
		}

		::System::Void __cctor_b__68_2(::Il2CppArray<::System::Byte>* b, ::System::Int32 i, ::System::SByte v)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::SByte))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER___C___CCTOR_B__68_2_OFFSET))(this, b, i, v);
		}

		::System::Void __cctor_b__68_3(::Il2CppArray<::System::Byte>* b, ::System::Int32 i, ::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAWRITER___C___CCTOR_B__68_3_OFFSET))(this, b, i, v);
		}
	};
}
