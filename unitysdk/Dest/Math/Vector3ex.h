#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/ProjectionPlanes.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Vector3ex_Information; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_VECTOR3EX_ANGLEDEG_OFFSET UNITYSDK_OFFSET(0x19987AF0)
#define DEST_MATH_VECTOR3EX_ANGLERAD_OFFSET UNITYSDK_OFFSET(0x19987CE0)
#define DEST_MATH_VECTOR3EX_CREATEORTHONORMALBASIS_OFFSET UNITYSDK_OFFSET(0x19981750)
#define DEST_MATH_VECTOR3EX_CROSS_1_OFFSET UNITYSDK_OFFSET(0x199882B0)
#define DEST_MATH_VECTOR3EX_CROSS_2_OFFSET UNITYSDK_OFFSET(0x19988300)
#define DEST_MATH_VECTOR3EX_CROSS_OFFSET UNITYSDK_OFFSET(0x19976470)
#define DEST_MATH_VECTOR3EX_DOT_1_OFFSET UNITYSDK_OFFSET(0x19987A90)
#define DEST_MATH_VECTOR3EX_DOT_2_OFFSET UNITYSDK_OFFSET(0x19987AC0)
#define DEST_MATH_VECTOR3EX_DOT_OFFSET UNITYSDK_OFFSET(0x19975890)
#define DEST_MATH_VECTOR3EX_GETINFORMATION_OFFSET UNITYSDK_OFFSET(0x19986660)
#define DEST_MATH_VECTOR3EX_GETPROJECTIONPLANE_OFFSET UNITYSDK_OFFSET(0x19977C20)
#define DEST_MATH_VECTOR3EX_GROWLENGTH_OFFSET UNITYSDK_OFFSET(0x199885E0)
#define DEST_MATH_VECTOR3EX_LENGTHSQR_OFFSET UNITYSDK_OFFSET(0x19987A70)
#define DEST_MATH_VECTOR3EX_LENGTH_OFFSET UNITYSDK_OFFSET(0x19987A40)
#define DEST_MATH_VECTOR3EX_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x19987C50)
#define DEST_MATH_VECTOR3EX_REPLICATE_OFFSET UNITYSDK_OFFSET(0x19988680)
#define DEST_MATH_VECTOR3EX_SAMEDIRECTION_OFFSET UNITYSDK_OFFSET(0x199886A0)
#define DEST_MATH_VECTOR3EX_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x19988550)
#define DEST_MATH_VECTOR3EX_SIGNEDANGLEDEG_OFFSET UNITYSDK_OFFSET(0x19987E40)
#define DEST_MATH_VECTOR3EX_SIGNEDANGLERAD_OFFSET UNITYSDK_OFFSET(0x19988080)
#define DEST_MATH_VECTOR3EX_TOSTRINGEX_OFFSET UNITYSDK_OFFSET(0x199865A0)
#define DEST_MATH_VECTOR3EX_TOVECTOR2XY_OFFSET UNITYSDK_OFFSET(0x19988720)
#define DEST_MATH_VECTOR3EX_TOVECTOR2XZ_OFFSET UNITYSDK_OFFSET(0x19988730)
#define DEST_MATH_VECTOR3EX_TOVECTOR2YZ_OFFSET UNITYSDK_OFFSET(0x19988740)
#define DEST_MATH_VECTOR3EX_TOVECTOR2_OFFSET UNITYSDK_OFFSET(0x19977C60)
#define DEST_MATH_VECTOR3EX_UNITCROSS_1_OFFSET UNITYSDK_OFFSET(0x19988350)
#define DEST_MATH_VECTOR3EX_UNITCROSS_2_OFFSET UNITYSDK_OFFSET(0x19988450)
#define DEST_MATH_VECTOR3EX_UNITCROSS_OFFSET UNITYSDK_OFFSET(0x19979910)
#define DEST_MATH_VECTOR3EX__CCTOR_OFFSET UNITYSDK_OFFSET(0x19988750)

namespace Dest::Math
{
	inline static constexpr unsigned int Vector3ex_TypeDefinitionIndex = 31694;

	class Vector3ex : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_One()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x7C70);
		}
		static ::UnityEngine::Vector3* StaticGet_PositiveInfinity()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x7C7C);
		}
		static ::UnityEngine::Vector3* StaticGet_UnitY()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x7C88);
		}
		static ::UnityEngine::Vector3* StaticGet_Zero()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x7C94);
		}
		static ::UnityEngine::Vector3* StaticGet_NegativeInfinity()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x7CA0);
		}
		static ::UnityEngine::Vector3* StaticGet_UnitX()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x7CAC);
		}
		static ::UnityEngine::Vector3* StaticGet_UnitZ()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x7CB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX__CCTOR_OFFSET))();
		}

		static ::Dest::Math::Vector3ex_Information* GetInformation(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Single epsilon)
		{
			return ((::Dest::Math::Vector3ex_Information*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_GETINFORMATION_OFFSET))(points, epsilon);
		}

		static ::System::Single Length(::UnityEngine::Vector3 vector)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_LENGTH_OFFSET))(vector);
		}

		static ::System::Single LengthSqr(::UnityEngine::Vector3 vector)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_LENGTHSQR_OFFSET))(vector);
		}

		static ::System::Single Dot(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_DOT_OFFSET))(vector, value);
		}

		static ::System::Single Dot_1(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3& value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_DOT_1_OFFSET))(vector, value);
		}

		static ::System::Single Dot_2(::UnityEngine::Vector3& vector, ::UnityEngine::Vector3& value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_DOT_2_OFFSET))(vector, value);
		}

		static ::System::Single AngleDeg(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 target)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_ANGLEDEG_OFFSET))(vector, target);
		}

		static ::System::Single AngleRad(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 target)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_ANGLERAD_OFFSET))(vector, target);
		}

		static ::System::Single SignedAngleDeg(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 target, ::UnityEngine::Vector3 normal)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_SIGNEDANGLEDEG_OFFSET))(vector, target, normal);
		}

		static ::System::Single SignedAngleRad(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 target, ::UnityEngine::Vector3 normal)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_SIGNEDANGLERAD_OFFSET))(vector, target, normal);
		}

		static ::UnityEngine::Vector3 Cross(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_CROSS_OFFSET))(vector, value);
		}

		static ::UnityEngine::Vector3 Cross_1(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3& value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_CROSS_1_OFFSET))(vector, value);
		}

		static ::UnityEngine::Vector3 Cross_2(::UnityEngine::Vector3& vector, ::UnityEngine::Vector3& value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_CROSS_2_OFFSET))(vector, value);
		}

		static ::UnityEngine::Vector3 UnitCross(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_UNITCROSS_OFFSET))(vector, value);
		}

		static ::UnityEngine::Vector3 UnitCross_1(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3& value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_UNITCROSS_1_OFFSET))(vector, value);
		}

		static ::UnityEngine::Vector3 UnitCross_2(::UnityEngine::Vector3& vector, ::UnityEngine::Vector3& value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_UNITCROSS_2_OFFSET))(vector, value);
		}

		static ::System::Single Normalize(::UnityEngine::Vector3& vector, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_NORMALIZE_OFFSET))(vector, epsilon);
		}

		static ::System::Single SetLength(::UnityEngine::Vector3& vector, ::System::Single lengthValue, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_SETLENGTH_OFFSET))(vector, lengthValue, epsilon);
		}

		static ::System::Single GrowLength(::UnityEngine::Vector3& vector, ::System::Single lengthDelta, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_GROWLENGTH_OFFSET))(vector, lengthDelta, epsilon);
		}

		static ::UnityEngine::Vector3 Replicate(::System::Single value)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_REPLICATE_OFFSET))(value);
		}

		static ::System::Void CreateOrthonormalBasis(::UnityEngine::Vector3& u, ::UnityEngine::Vector3& v, ::UnityEngine::Vector3& w)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_CREATEORTHONORMALBASIS_OFFSET))(u, v, w);
		}

		static ::System::Boolean SameDirection(::UnityEngine::Vector3 value0, ::UnityEngine::Vector3 value1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_SAMEDIRECTION_OFFSET))(value0, value1);
		}

		static ::UnityEngine::Vector2 ToVector2XY(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_TOVECTOR2XY_OFFSET))(vector);
		}

		static ::UnityEngine::Vector2 ToVector2XZ(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_TOVECTOR2XZ_OFFSET))(vector);
		}

		static ::UnityEngine::Vector2 ToVector2YZ(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_TOVECTOR2YZ_OFFSET))(vector);
		}

		static ::UnityEngine::Vector2 ToVector2(::UnityEngine::Vector3 vector, ::Dest::Math::ProjectionPlanes projectionPlane)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3, ::Dest::Math::ProjectionPlanes))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_TOVECTOR2_OFFSET))(vector, projectionPlane);
		}

		static ::Dest::Math::ProjectionPlanes GetProjectionPlane(::UnityEngine::Vector3 vector)
		{
			return ((::Dest::Math::ProjectionPlanes(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_GETPROJECTIONPLANE_OFFSET))(vector);
		}

		static ::System::String* ToStringEx(::UnityEngine::Vector3 vector)
		{
			return ((::System::String*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_TOSTRINGEX_OFFSET))(vector);
		}
	};
}
