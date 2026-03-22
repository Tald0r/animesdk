#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDSELF_OFFSET UNITYSDK_OFFSET(0x1A2C74C0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x1A2C54A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_2_OFFSET UNITYSDK_OFFSET(0x1A2C73A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET UNITYSDK_OFFSET(0x1A2C53B0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A2C5A70)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1A2C6DC0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x1A2C8490)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1A2C6C40)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_1_OFFSET UNITYSDK_OFFSET(0x1A2C76B0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET UNITYSDK_OFFSET(0x1A2C6D10)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTCORE_OFFSET UNITYSDK_OFFSET(0x1A2C82F0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x1A2C5B10)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_2_OFFSET UNITYSDK_OFFSET(0x1A2C75A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1A2C59B0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2C97A0)

namespace System::Numerics
{
	inline static constexpr unsigned int BigIntegerCalculator_TypeDefinitionIndex = 6478;

	class BigIntegerCalculator : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_AllocationThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x2FD0);
		}
		static ::System::Int32* StaticGet_MultiplyThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x2FD4);
		}
		static ::System::Int32* StaticGet_ReducerThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x2FD8);
		}
		static ::System::Int32* StaticGet_SquareThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BigIntegerCalculator_TypeDefinitionIndex)->GetStaticField(0x2FDC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* Add(::Il2CppArray<::System::UInt32>* left, ::System::UInt32 right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET))(left, right);
		}

		static ::Il2CppArray<::System::UInt32>* Add_1(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_1_OFFSET))(left, right);
		}

		static ::System::Void Add_2(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength, ::System::UInt32* bits, ::System::Int32 bitsLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_2_OFFSET))(left, leftLength, right, rightLength, bits, bitsLength);
		}

		static ::System::Void AddSelf(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDSELF_OFFSET))(left, leftLength, right, rightLength);
		}

		static ::Il2CppArray<::System::UInt32>* Subtract(::Il2CppArray<::System::UInt32>* left, ::System::UInt32 right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET))(left, right);
		}

		static ::Il2CppArray<::System::UInt32>* Subtract_1(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_1_OFFSET))(left, right);
		}

		static ::System::Void Subtract_2(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength, ::System::UInt32* bits, ::System::Int32 bitsLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_2_OFFSET))(left, leftLength, right, rightLength, bits, bitsLength);
		}

		static ::System::Int32 Compare(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_OFFSET))(left, right);
		}

		static ::Il2CppArray<::System::UInt32>* Square(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET))(value);
		}

		static ::System::Void Square_1(::System::UInt32* value, ::System::Int32 valueLength, ::System::UInt32* bits, ::System::Int32 bitsLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_1_OFFSET))(value, valueLength, bits, bitsLength);
		}

		static ::Il2CppArray<::System::UInt32>* Multiply(::Il2CppArray<::System::UInt32>* left, ::System::UInt32 right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET))(left, right);
		}

		static ::Il2CppArray<::System::UInt32>* Multiply_1(::Il2CppArray<::System::UInt32>* left, ::Il2CppArray<::System::UInt32>* right)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_1_OFFSET))(left, right);
		}

		static ::System::Void Multiply_2(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength, ::System::UInt32* bits, ::System::Int32 bitsLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_2_OFFSET))(left, leftLength, right, rightLength, bits, bitsLength);
		}

		static ::System::Void SubtractCore(::System::UInt32* left, ::System::Int32 leftLength, ::System::UInt32* right, ::System::Int32 rightLength, ::System::UInt32* core, ::System::Int32 coreLength)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32, ::System::UInt32*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTCORE_OFFSET))(left, leftLength, right, rightLength, core, coreLength);
		}
	};
}
