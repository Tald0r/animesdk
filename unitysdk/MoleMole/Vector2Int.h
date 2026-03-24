#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_VECTOR2INT_AABBOVERLAPWITHAREA_OFFSET UNITYSDK_OFFSET(0x7BED480)
#define MOLEMOLE_VECTOR2INT_AABBOVERLAP_OFFSET UNITYSDK_OFFSET(0x7BED3D0)
#define MOLEMOLE_VECTOR2INT_CLAMP_OFFSET UNITYSDK_OFFSET(0x344450)
#define MOLEMOLE_VECTOR2INT_DISTANCESQUARED_1_OFFSET UNITYSDK_OFFSET(0x7BED070)
#define MOLEMOLE_VECTOR2INT_DISTANCESQUARED_2_OFFSET UNITYSDK_OFFSET(0x7BED100)
#define MOLEMOLE_VECTOR2INT_DISTANCESQUARED_OFFSET UNITYSDK_OFFSET(0x7BECFE0)
#define MOLEMOLE_VECTOR2INT_DISTANCE_1_OFFSET UNITYSDK_OFFSET(0x7BECEA0)
#define MOLEMOLE_VECTOR2INT_DISTANCE_2_OFFSET UNITYSDK_OFFSET(0x7BECF40)
#define MOLEMOLE_VECTOR2INT_DISTANCE_OFFSET UNITYSDK_OFFSET(0x7BECE00)
#define MOLEMOLE_VECTOR2INT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3441C0)
#define MOLEMOLE_VECTOR2INT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3441B0)
#define MOLEMOLE_VECTOR2INT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x344240)
#define MOLEMOLE_VECTOR2INT_GETHASHEDRANDOMVALUE_OFFSET UNITYSDK_OFFSET(0x3442B0)
#define MOLEMOLE_VECTOR2INT_GET_CARDINALSANDORDINALS_OFFSET UNITYSDK_OFFSET(0x7BEBA50)
#define MOLEMOLE_VECTOR2INT_GET_CARDINALS_OFFSET UNITYSDK_OFFSET(0x7BEB6F0)
#define MOLEMOLE_VECTOR2INT_GET_COMPONENTSUM_OFFSET UNITYSDK_OFFSET(0x343CD0)
#define MOLEMOLE_VECTOR2INT_GET_MAJORAXIS_OFFSET UNITYSDK_OFFSET(0x343C50)
#define MOLEMOLE_VECTOR2INT_GET_ORDINALS_OFFSET UNITYSDK_OFFSET(0x7BEB8A0)
#define MOLEMOLE_VECTOR2INT_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x343C60)
#define MOLEMOLE_VECTOR2INT_GET_X_OFFSET UNITYSDK_OFFSET(0x2F1F70)
#define MOLEMOLE_VECTOR2INT_GET_Y_OFFSET UNITYSDK_OFFSET(0x302230)
#define MOLEMOLE_VECTOR2INT_ISWITHIN_OFFSET UNITYSDK_OFFSET(0x344110)
#define MOLEMOLE_VECTOR2INT_MANHATTANDISTANCE_1_OFFSET UNITYSDK_OFFSET(0x7BECCE0)
#define MOLEMOLE_VECTOR2INT_MANHATTANDISTANCE_2_OFFSET UNITYSDK_OFFSET(0x7BECD70)
#define MOLEMOLE_VECTOR2INT_MANHATTANDISTANCE_OFFSET UNITYSDK_OFFSET(0x7BECC50)
#define MOLEMOLE_VECTOR2INT_MAX_OFFSET UNITYSDK_OFFSET(0x7BED340)
#define MOLEMOLE_VECTOR2INT_MIN_OFFSET UNITYSDK_OFFSET(0x7BED2B0)
#define MOLEMOLE_VECTOR2INT_OP_ADDITION_1_OFFSET UNITYSDK_OFFSET(0x7BEC7A0)
#define MOLEMOLE_VECTOR2INT_OP_ADDITION_2_OFFSET UNITYSDK_OFFSET(0x7BEC840)
#define MOLEMOLE_VECTOR2INT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x7BEC700)
#define MOLEMOLE_VECTOR2INT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x7BECA60)
#define MOLEMOLE_VECTOR2INT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x7BECB50)
#define MOLEMOLE_VECTOR2INT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x7BED580)
#define MOLEMOLE_VECTOR2INT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x7BECBD0)
#define MOLEMOLE_VECTOR2INT_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x7BEC9E0)
#define MOLEMOLE_VECTOR2INT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x7BEC960)
#define MOLEMOLE_VECTOR2INT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x7BEC8D0)
#define MOLEMOLE_VECTOR2INT_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x7BECAE0)
#define MOLEMOLE_VECTOR2INT_SCALE_OFFSET UNITYSDK_OFFSET(0x7BED220)
#define MOLEMOLE_VECTOR2INT_TOCENTERVECTOR2_OFFSET UNITYSDK_OFFSET(0x343E80)
#define MOLEMOLE_VECTOR2INT_TOCENTERVECTOR3_OFFSET UNITYSDK_OFFSET(0x344060)
#define MOLEMOLE_VECTOR2INT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3441A0)
#define MOLEMOLE_VECTOR2INT_TOVECTOR2INT_OFFSET UNITYSDK_OFFSET(0x3444F0)
#define MOLEMOLE_VECTOR2INT_TOVECTOR2_1_OFFSET UNITYSDK_OFFSET(0x343DD0)
#define MOLEMOLE_VECTOR2INT_TOVECTOR2_OFFSET UNITYSDK_OFFSET(0x343D50)
#define MOLEMOLE_VECTOR2INT_TOVECTOR3_1_OFFSET UNITYSDK_OFFSET(0x343FB0)
#define MOLEMOLE_VECTOR2INT_TOVECTOR3_OFFSET UNITYSDK_OFFSET(0x343F10)
#define MOLEMOLE_VECTOR2INT_WITHX_OFFSET UNITYSDK_OFFSET(0x344350)
#define MOLEMOLE_VECTOR2INT_WITHY_OFFSET UNITYSDK_OFFSET(0x3443D0)
#define MOLEMOLE_VECTOR2INT__CCTOR_OFFSET UNITYSDK_OFFSET(0x7BED660)
#define MOLEMOLE_VECTOR2INT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3074E0)
#define MOLEMOLE_VECTOR2INT__CTOR_OFFSET UNITYSDK_OFFSET(0x2F3C30)
#define MOLEMOLE_VECTOR2INT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x344560)
#define MOLEMOLE_VECTOR2INT___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3445A0)
#define MOLEMOLE_VECTOR2INT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3445E0)

namespace MoleMole
{
	inline static constexpr unsigned int Vector2Int_TypeDefinitionIndex = 55627;

	struct alignas(4) Vector2Int
	{
		static ::Il2CppArray<::MoleMole::Vector2Int>** StaticGet_m_cachedCardinals()
		{
			return (::Il2CppArray<::MoleMole::Vector2Int>**)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x2AFB0);
		}
		static ::Il2CppArray<::MoleMole::Vector2Int>** StaticGet_m_cachedCardinalsAndOrdinals()
		{
			return (::Il2CppArray<::MoleMole::Vector2Int>**)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x2AFB8);
		}
		static ::Il2CppArray<::MoleMole::Vector2Int>** StaticGet_m_cachedOrdinals()
		{
			return (::Il2CppArray<::MoleMole::Vector2Int>**)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x2AFC0);
		}
		static ::MoleMole::Vector2Int* StaticGet_minValue()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9870);
		}
		static ::MoleMole::Vector2Int* StaticGet_northWest()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9878);
		}
		static ::MoleMole::Vector2Int* StaticGet_west()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9880);
		}
		static ::MoleMole::Vector2Int* StaticGet_south()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9888);
		}
		static ::MoleMole::Vector2Int* StaticGet_one()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9890);
		}
		static ::MoleMole::Vector2Int* StaticGet_down()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9898);
		}
		static ::MoleMole::Vector2Int* StaticGet_negOne()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98A0);
		}
		static ::MoleMole::Vector2Int* StaticGet_upLeft()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98A8);
		}
		static ::MoleMole::Vector2Int* StaticGet_downRight()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98B0);
		}
		static ::MoleMole::Vector2Int* StaticGet_maxValue()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98B8);
		}
		static ::MoleMole::Vector2Int* StaticGet_up()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98C0);
		}
		static ::MoleMole::Vector2Int* StaticGet_northEast()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98C8);
		}
		static ::MoleMole::Vector2Int* StaticGet_north()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98D0);
		}
		static ::MoleMole::Vector2Int* StaticGet_southWest()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98D8);
		}
		static ::MoleMole::Vector2Int* StaticGet_left()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98E0);
		}
		static ::MoleMole::Vector2Int* StaticGet_minValueInt16()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98E8);
		}
		static ::MoleMole::Vector2Int* StaticGet_zero()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98F0);
		}
		static ::MoleMole::Vector2Int* StaticGet_east()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x98F8);
		}
		static ::MoleMole::Vector2Int* StaticGet_southEast()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9900);
		}
		static ::MoleMole::Vector2Int* StaticGet_downLeft()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9908);
		}
		static ::MoleMole::Vector2Int* StaticGet_minValueInt32()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9910);
		}
		static ::MoleMole::Vector2Int* StaticGet_right()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9918);
		}
		static ::MoleMole::Vector2Int* StaticGet_upRight()
		{
			return (::MoleMole::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Vector2Int_TypeDefinitionIndex)->GetStaticField(0x9920);
		}
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14

		::System::Void _ctor(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT__CTOR_OFFSET))(this, x, y);
		}

		::System::Void _ctor_1(::MoleMole::Vector2Int value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::MoleMole::Vector2Int>* get_Cardinals()
		{
			return ((::Il2CppArray<::MoleMole::Vector2Int>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_GET_CARDINALS_OFFSET))();
		}

		static ::Il2CppArray<::MoleMole::Vector2Int>* get_Ordinals()
		{
			return ((::Il2CppArray<::MoleMole::Vector2Int>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_GET_ORDINALS_OFFSET))();
		}

		static ::Il2CppArray<::MoleMole::Vector2Int>* get_CardinalsAndOrdinals()
		{
			return ((::Il2CppArray<::MoleMole::Vector2Int>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_GET_CARDINALSANDORDINALS_OFFSET))();
		}

		::System::Int32 get_X()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_GET_X_OFFSET))(this);
		}

		::System::Int32 get_Y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_GET_Y_OFFSET))(this);
		}

		::MoleMole::Vector2Int get_MajorAxis()
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_GET_MAJORAXIS_OFFSET))(this);
		}

		::System::Int32 get_sqrMagnitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		::System::Int32 get_ComponentSum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_GET_COMPONENTSUM_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 ToVector2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_TOVECTOR2_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 ToVector2_1(::System::Single xOffset, ::System::Single yOffset)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_TOVECTOR2_1_OFFSET))(this, xOffset, yOffset);
		}
		*/

		/*
		::UnityEngine::Vector2 ToCenterVector2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_TOCENTERVECTOR2_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 ToVector3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_TOVECTOR3_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 ToVector3_1(::System::Single height)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_TOVECTOR3_1_OFFSET))(this, height);
		}
		*/

		/*
		::UnityEngine::Vector3 ToCenterVector3(::System::Single height)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_TOCENTERVECTOR3_OFFSET))(this, height);
		}
		*/

		::System::Boolean IsWithin(::MoleMole::Vector2Int min, ::MoleMole::Vector2Int max)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_ISWITHIN_OFFSET))(this, min, max);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MoleMole::Vector2Int other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_GETHASHCODE_OFFSET))(this);
		}

		::System::Single GetHashedRandomValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_GETHASHEDRANDOMVALUE_OFFSET))(this);
		}

		::MoleMole::Vector2Int WithX(::System::Int32 newX)
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_WITHX_OFFSET))(this, newX);
		}

		::MoleMole::Vector2Int WithY(::System::Int32 newY)
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_WITHY_OFFSET))(this, newY);
		}

		/*
		static ::UnityEngine::Vector2 op_Addition(::UnityEngine::Vector2 a, ::MoleMole::Vector2Int b)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_OP_ADDITION_OFFSET))(a, b);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Addition_1(::MoleMole::Vector2Int a, ::UnityEngine::Vector2 b)
		{
			return ((::UnityEngine::Vector2(*)(::MoleMole::Vector2Int, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_OP_ADDITION_1_OFFSET))(a, b);
		}
		*/

		static ::MoleMole::Vector2Int op_Addition_2(::MoleMole::Vector2Int a, ::MoleMole::Vector2Int b)
		{
			return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_OP_ADDITION_2_OFFSET))(a, b);
		}

		static ::MoleMole::Vector2Int op_Subtraction(::MoleMole::Vector2Int a, ::MoleMole::Vector2Int b)
		{
			return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::MoleMole::Vector2Int op_Multiply(::MoleMole::Vector2Int a, ::System::Int32 b)
		{
			return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_OP_MULTIPLY_OFFSET))(a, b);
		}

		static ::MoleMole::Vector2Int op_Multiply_1(::System::Int32 a, ::MoleMole::Vector2Int b)
		{
			return ((::MoleMole::Vector2Int(*)(::System::Int32, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_OP_MULTIPLY_1_OFFSET))(a, b);
		}

		static ::MoleMole::Vector2Int op_Division(::MoleMole::Vector2Int a, ::System::Int32 b)
		{
			return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_OP_DIVISION_OFFSET))(a, b);
		}

		static ::MoleMole::Vector2Int op_UnaryNegation(::MoleMole::Vector2Int a)
		{
			return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::System::Boolean op_Equality(::MoleMole::Vector2Int a, ::MoleMole::Vector2Int b)
		{
			return ((::System::Boolean(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::MoleMole::Vector2Int a, ::MoleMole::Vector2Int b)
		{
			return ((::System::Boolean(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Int32 ManhattanDistance(::MoleMole::Vector2Int a, ::MoleMole::Vector2Int b)
		{
			return ((::System::Int32(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_MANHATTANDISTANCE_OFFSET))(a, b);
		}

		static ::System::Int32 ManhattanDistance_1(::MoleMole::Vector2Int a, ::System::Int32 bx, ::System::Int32 by)
		{
			return ((::System::Int32(*)(::MoleMole::Vector2Int, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_MANHATTANDISTANCE_1_OFFSET))(a, bx, by);
		}

		static ::System::Int32 ManhattanDistance_2(::System::Int32 ax, ::System::Int32 ay, ::System::Int32 bx, ::System::Int32 by)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_MANHATTANDISTANCE_2_OFFSET))(ax, ay, bx, by);
		}

		static ::System::Single Distance(::MoleMole::Vector2Int a, ::MoleMole::Vector2Int b)
		{
			return ((::System::Single(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_DISTANCE_OFFSET))(a, b);
		}

		static ::System::Single Distance_1(::MoleMole::Vector2Int a, ::System::Int32 bx, ::System::Int32 by)
		{
			return ((::System::Single(*)(::MoleMole::Vector2Int, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_DISTANCE_1_OFFSET))(a, bx, by);
		}

		static ::System::Single Distance_2(::System::Int32 ax, ::System::Int32 ay, ::System::Int32 bx, ::System::Int32 by)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_DISTANCE_2_OFFSET))(ax, ay, bx, by);
		}

		static ::System::Single DistanceSquared(::MoleMole::Vector2Int a, ::MoleMole::Vector2Int b)
		{
			return ((::System::Single(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_DISTANCESQUARED_OFFSET))(a, b);
		}

		static ::System::Single DistanceSquared_1(::MoleMole::Vector2Int a, ::System::Int32 bx, ::System::Int32 by)
		{
			return ((::System::Single(*)(::MoleMole::Vector2Int, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_DISTANCESQUARED_1_OFFSET))(a, bx, by);
		}

		static ::System::Single DistanceSquared_2(::System::Int32 ax, ::System::Int32 ay, ::System::Int32 bx, ::System::Int32 by)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_DISTANCESQUARED_2_OFFSET))(ax, ay, bx, by);
		}

		::System::Void Clamp(::MoleMole::Vector2Int min, ::MoleMole::Vector2Int max)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_CLAMP_OFFSET))(this, min, max);
		}

		static ::MoleMole::Vector2Int Scale(::MoleMole::Vector2Int lhs, ::MoleMole::Vector2Int rhs)
		{
			return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_SCALE_OFFSET))(lhs, rhs);
		}

		static ::MoleMole::Vector2Int Min(::MoleMole::Vector2Int lhs, ::MoleMole::Vector2Int rhs)
		{
			return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_MIN_OFFSET))(lhs, rhs);
		}

		static ::MoleMole::Vector2Int Max(::MoleMole::Vector2Int lhs, ::MoleMole::Vector2Int rhs)
		{
			return ((::MoleMole::Vector2Int(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_MAX_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean AABBOverlap(::MoleMole::Vector2Int posA, ::MoleMole::Vector2Int dimensionsA, ::MoleMole::Vector2Int posB, ::MoleMole::Vector2Int dimensionsB)
		{
			return ((::System::Boolean(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_AABBOVERLAP_OFFSET))(posA, dimensionsA, posB, dimensionsB);
		}

		static ::System::Boolean AABBOverlapWithArea(::MoleMole::Vector2Int posA, ::MoleMole::Vector2Int dimensionsA, ::MoleMole::Vector2Int posB, ::MoleMole::Vector2Int dimensionsB, ::System::Int32& cellsOverlapping)
		{
			return ((::System::Boolean(*)(::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_AABBOVERLAPWITHAREA_OFFSET))(posA, dimensionsA, posB, dimensionsB, cellsOverlapping);
		}

		/*
		static ::UnityEngine::Vector2 op_Explicit(::MoleMole::Vector2Int v)
		{
			return ((::UnityEngine::Vector2(*)(::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		::MoleMole::Vector2Int ToVector2Int()
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT_TOVECTOR2INT_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VECTOR2INT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
